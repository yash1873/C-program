#include <stdio.h>
int main ()
{
    int a;
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    a=c;
    if (a>=65 && a<=90)
    {
      printf("%c is a Capital Letter\n",c);
    }
    else if (a>=97 && a<=122)
    {
        printf("%c is a Lower Case Letter\n",c);
    }
    else if (a>=48 && a<=57)
    {
        printf("%c is a Digit\n",c);
    }
    else if (a>=0 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=127)
    {
        printf("%c is a Special Character\n",c);
    }
    return 0;    
}