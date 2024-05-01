/*prog14_4 */
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;

int main(void)
{
	NODE *a,*b,*c,*d,*ptr;
	
	a = (NODE*)malloc(sizeof(NODE));
	a->data=12;
	b = (NODE*)malloc(sizeof(NODE));
	a->next = b; 
	b->data=38;
	c = (NODE*)malloc(sizeof(NODE));
	b->next = c; 
	c->data=64;
	d = (NODE*)malloc(sizeof(NODE));
	c->next = d; 
	d->data=37;
	d->next = NULL;
	
	ptr = a;
	
	while(ptr!=NULL)
	{
		printf("address=%p, data=%d, next=%p\n",ptr,ptr->data,ptr->next);
		ptr=ptr->next;
	}
	
	// delete 38 64
	a->next = d;
	free(b);
	free(c);
	
	printf("After deleting:\n");
	ptr = a;
	while(ptr!=NULL)
	{
		printf("address=%p, data=%d, next=%p\n",ptr,ptr->data,ptr->next);
		ptr=ptr->next;
	}
	
	system("pause");
	return 0;
	
}
