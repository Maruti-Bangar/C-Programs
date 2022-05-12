#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;  // Static memory allocation.

//   Dynamic memory allocation.
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
obj.data = 11; // Direct accessing operator.
obj.next = NULL;

ptr->data = 11;  // Indirect accessing operator ->
ptr->next = NULL;


  return 0;
}