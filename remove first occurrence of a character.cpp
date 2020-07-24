                          

#include <iostream>


using namespace std;


int
main ()

{
  
char str[80];
  
char ch;
  
cin.getline (str, sizeof (str));
  
int n = sizeof (str);
  
cin >> ch;
  int i = 0;
  
while (i < n && str[i] != ch)
    
i++;
  
while (i < n)
    
{
      
str[i] = str[i + 1];
      
i++;
    
}
  
cout << str;

 
 return 0;

}
