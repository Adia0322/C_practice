// exc12-2
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;

int main(void)
{
	NODE *a,*b,*c,*ptr;
	
	a = (NODE*)malloc(sizeof(NODE));
	a->data=12;
	b = (NODE*)malloc(sizeof(NODE));
	a->next = b; 
	b->data=30;
	c = (NODE*)malloc(sizeof(NODE));
	b->next = c; 
	c->data=60;
	c->next = NULL;
	
	ptr = a;
	
	while(ptr!=NULL)
	{
		printf("address=%p, data=%d, next=%p\n",ptr,ptr->data,ptr->next);
		ptr=ptr->next;
	}
	
	system("pause");
	return 0;
	
}
