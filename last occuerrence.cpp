#include <iostream>
using namespace std;

int main() {
  char arr[100];
cin.getline(arr,sizeof(arr));
char x;
cin>>x;
int i,index;
for(i=0;arr[i]!='\0';i++)
{
  if(arr[i]==x)
  index=i;
}

cout<<index;
    return 0;
}
