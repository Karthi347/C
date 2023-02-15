#include<stdio.h>
int main()
{
  int c = 0, v= 0, con=0;
  char s[1000];
  printf("Enter a string:");
  gets(s);
  while (s[c] != '\0') 
  {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
    	v++;
    else
    	con++;
    c++;
  }
  printf("\nNumber of vowels = %d", v);
  printf("\nNumber of consonants = %d",con);
  return 0;
}


