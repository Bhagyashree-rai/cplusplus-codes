#include<iostream>
using namespace std;

 
int
main () 
{
  
char str[100];
  
int i, j, k;
  
cin.getline (str, sizeof (str));
  
 
for (i = 0; i < sizeof (str); i++)
    
    {
      
for (j = i + 1; str[j] != '\0'; j++)
	
	{
	  
if (str[j] == str[i])
	    
	    {
	      
for (k = j; str[k] != '\0'; k++)
		
		{
		  
str[k] = str[k + 1];
		
}
	    
}
	
}
    
}
  
 
cout << "The Final String after Removing All Duplicates = " << str;
  
 
return 0;

}
