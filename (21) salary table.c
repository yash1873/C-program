#include <stdio.h>
int main()
{
    char g;
    int yos,qual,sal=0;
    printf("Enter Gender,yos and qualifications (0=G,1=PG)");
    scanf("%c %d %d",&g,&yos,&qual);
    if(g=='M'&&yos>=10 && qual==1)
     sal=11000;
    else if ((g=='M'&& yos>=10 && qual==0)||(g=='M'&&yos<10 && qual==1))
     sal=10000;
    else if (g=='M'&& yos <10 && qual==0)
     sal=7000;
    else if (g=='F' && yos>=10 && qual==1)
     sal=12000;
    else if (g=='F'&& yos>=10 && qual==0)
     sal=9000;
    else if (g=='F' && yos<10 && qual==1)
     sal=10000;
    else if (g=='F'&& yos<10 && qual==0)
     sal=6000;
    printf("Salary=%d",sal);
    return 0;
}