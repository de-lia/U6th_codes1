/*C Program to check if the given string is Palindrome or not*/
#include <stdio.h>
#include <string.h>
int main ()
{
	char str[100], revstr[100];
	int i, j, len, flag;
	flag = 0;
	
	printf("\ Please enter any string: ");
	gets(str);
	len = strlen(str);
	j = 0;
	
	for(i = len-1; i >= 0; i--)
	{
		revstr[j++] = str[i];
	}
	revstr[i] = '\0';
	
	for(i = 0; i < len; i++)
	{
		if(str[i] != revstr[i])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("\n %s is a Palindrome string", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome string", str);
	}
	return 0;
}
