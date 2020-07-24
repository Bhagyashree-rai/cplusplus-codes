

#include <iostream>


using namespace std;


int 
main ()

{
  
char str[80];
  
char ch;
  
cin.getline(str, sizeof (str));
  
int n = sizeof(str);
  
cin >> ch;
  
int i = 0, index;
  
while(i < n)
 
   {
      
if (str[i] == ch)
	
{
	 
 index = i;
	 
 while (index < n)
	   
 {
	
      str[index] = str[index + 1];
	
      index++;
	  
  }

  }
    
  i++;
   
 }
  
cout << str;

 
 return 0;

}
