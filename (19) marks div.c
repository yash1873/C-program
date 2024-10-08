#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in 5 subjects");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/5;
    if(per>=60)
    {
        printf("1st division");
    }
    else
    {
        if (per>=50)
          printf("2nd division");
        else
        {
          if (per>=40)
          printf("3rd division");
          else
          printf("fail");
        }
    }
}