#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
    
};

struct node *head=NULL;

void ins_beg(struct node*);
void ins_end(struct node*);
void del_beg();
void del_end();
void traversef();
void traverseb();

int main()
{
  struct node *new1;
  int choice,n;
  while(1)
  {
    printf("\nEnter your choice\n");
    printf("1 Insertion beginning\n2 Insertion End\n3 Deletion Beginning\n4Deletion End\n5 Traversal Forward\n6 Traversal End\n7 Exit\n")
    scanf("%d",&choice);

  }
}

