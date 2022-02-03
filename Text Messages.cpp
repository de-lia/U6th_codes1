#include<iostream>
#include<sstream>
#include<windows.h>
#include<wininet.h>

using namespace std;

string encode(string url);

int main(int argc, char** argv)
{
	// the SMS gateway's host
	// and port
	string host       = "localhost";     
	int port          = 9502;

	// username 
	// and password
	string username   = "admin";         
	string password   = "abc123";

	// message
	string message    = "This is a test SMS."; 

	// originator's phone number
	string originator = "+44555555555";    

	// recipient's phone number.
	// to send the SMS to multiple recipients, separate them by using commas without spaces
	string recipient  = "+44333333333";    
										 										 
	// preparing the HTTPRequest URL	
	stringstream url;					 
		url << "/api?action=sendmessage&username=" << encode(username);
		url << "&password=" << encode(password);
		url << "&recipient=" << encode(recipient);
		url << "&messagetype=SMS:TEXT&messagedata=" << encode(message);
		url << "&originator=" << encode(originator);
		url << "&responseformat=xml";

	// create socket
	HINTERNET inet = InternetOpen("Ozeki", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);

	// open connection and bind it to the socket
	HINTERNET conn = InternetConnect(inet, host.c_str() , port, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 0);

	// open the HTTP request
	HINTERNET sess = HttpOpenRequest(conn, "GET", url.str().c_str(), "HTTP/1.1", NULL, NULL, INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_RELOAD, 0);

    // check errors  	
	int error = GetLastError();
	if(error == NO_ERROR)
	{
		// send HTTP request
		HttpSendRequest(sess, NULL, 0, NULL,0);

		// receive HTTP response

		int size = 1024;
		char *buffer = new char[size + 1];
		DWORD read;
		int rsize = InternetReadFile(sess, (void *)buffer, size, &read);
		string s = buffer;
		s = s.substr(0, read);

		// check status code
		int pos = s.find("<statuscode>0</statuscode>");
	
		// if statuscode is 0, write "Message sent." to output
		// else write "Error."
		if(pos > 0) cout << "Message sent." << endl;
		else cout << "Error." << endl;
	}

	system("pause");
}


// encoding converts characters that are not allowed in a URL into character-entity equivalent
string encode(string url)
{
	char *hex = "0123456789ABCDEF";
	stringstream s;

	for(unsigned int i = 0; i < url.length(); i++)
	{
		byte c = (char)url.c_str()[i];
		if( ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9') ){
			s << c;
		} else {
			if(c == ' ') s << "%20";
			else
			s << '%' << (hex[c >> 4]) << (hex[c & 15]);
		}
	}
	
	return s.str();
}
