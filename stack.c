#define MAX 5
#include <stdio.h>
#include <stdlib.h>
int stack[MAX];
int Top=-1;

void push();
void pop();
void display();

int main()
{
    int choice;
    while (1)
    {
      printf("Enter choice\n 1. Push\n 2. Pop\n 3. Display\n 4. exit\n");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        exit(1);
      default:
        printf("Invalid Choice\n");
        break;
      }
    }
    
}

void push()
{
    int n;
    if (Top==MAX-1)
    {
        printf("Overflow\n");
    }
    else
    {
        Top+=1;
        printf("Enter an integer\n");
        scanf("%d",&n);
        stack[Top]=n;
    }
}

void pop()
{
    if(Top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        Top-=1;   
    }
}

void display()
{
    int i=Top;
    if (Top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
    while (i>=0)
    {
        printf("%d\n",stack[i]);
        i--;
    }
    }
}