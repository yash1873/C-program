#include <stdio.h>
int main() 
{
  char a;
  int b;
  printf("Enter the character\n");
  scanf("%c",&a);
  b=a;
  if (b==97 || b==101 || b==105 || b==111 || b==117 || b==65 || b==69 || b==73 || b==79 || b==85)
  printf("It is a vowel\n");
  else
  printf("It is a consonant\n");
  return 0;
}
