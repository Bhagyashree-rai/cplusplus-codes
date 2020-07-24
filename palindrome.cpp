/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int flag;
    for(int i=0;i<str.length()/2;i++)
    {
     if(str[i]==str[str.length()-i-1])
     flag=1;
     
    }
    if(flag==1)
    cout<<"Palindrome";
    else
    cout<<"Not palindrome";

    return 0;
}
