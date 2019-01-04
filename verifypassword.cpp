#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
string writePassword()
{ 	
    unsigned long int pwd;
    string passwd1;
    cout << "enter your password" << endl;
    cin >> passwd1;
    return passwd1;
}
string getPassword()
{ 
    int i = 0;	
	char k;
    char passwd2[50];
    ifstream infile("text.jpg");
    while((k = infile.get()) != EOF)
	{
		passwd2[i] = k-3;
		i++;
	}
	passwd2[ i ] = '\0';
    return passwd2;
}
bool verifyPassword(string str1,string str2)
{
    int a;
    a = str1.compare(str2);
    if (a == 0)
        return true;
    else return false;
    
}
int main()
{
  int a ;
    string str1;
    string str2;
    str1 = writePassword();
    str2 = getPassword();
    a = str1.compare(str2);
    if (a == 0)
        cout << "password is verified" << endl;
   else
        cout << "password is not verified" << endl;
    return 0;
}
