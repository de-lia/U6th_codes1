#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    cout << "First name: ";
    getline (cin, s1);

    cout << "Second name. Please include a space before: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = " << result;

    return 0;
}
