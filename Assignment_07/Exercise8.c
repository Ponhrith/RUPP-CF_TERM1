#include <stdio.h>
int main()
{
  char c;
  int LowercaseVowel, UpperCaseVowel;
  printf("Enter your alphabet: ");
  scanf("%c", &c);
  LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  UpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if (LowercaseVowel || UpperCaseVowel)
  printf("%c is a vowel", c);
  else 
  printf("%c is not a vowel", c);
  
  return 0;
}