#include<stdio.h>
#include<stdlib.h>
struct node
{
char data;
struct node *next;
}*n,*ptr1,*ptr,*header;
void main()
{
char e;

header=(struct node*)malloc(sizeof(struct node));
header->data=NULL;
header->next=NULL;
printf("insert ");

n=(struct node*)malloc(sizeof(struct node));
        printf("\nenter the element:");
        scanf("%c",&e);
        n->next=header->next;
        n->data=e;
        header->next=n;

 n=(struct node*)malloc(sizeof(struct node));
        printf("enter the element:");
        scanf("%c",&e); 
        ptr=header->next;
        while(ptr->next!=NULL)
         ptr=ptr->next;  
        n->next=ptr->next;
        n->data=e;
        ptr->next=n;
		ptr=header->next;
        	printf("\nthe list is:\n");
        	while(ptr!=NULL)
        	{
        	printf("%c\n",ptr->data);
        	ptr=ptr->next;
        	}





}
