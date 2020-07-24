#include <iostream>
using namespace std;

int
main ()
{
  char arr[100];
  cin.getline (arr, sizeof (arr));
  int freq[26];
  int n = sizeof (arr);
  for (int i = 0; i < 26; i++)
    {
      freq[i] = 0;
    }
  for (int i = 0; i < n; i++)
    {
      if (arr[i] >= 'a' && arr[i] <= 'z')
	{
	  freq[arr[i] - 97]++;
	}
      else if (arr[i] >= 'A' && arr[i] <= 'Z')
	{
	  freq[arr[i] - 65]++;
	}
    }
  for (int i = 0; i < 26; i++)
    {
      if (freq[i] != 0)
	printf ("%c-%d", (i + 97), freq[i]);
      cout << "\n";
    }
  return 0;
}
