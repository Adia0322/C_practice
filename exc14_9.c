/* exc14_9 */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

int main(void)
{
	NODE a,b,c,d;
	NODE *ptr=&a;
	a.data=12;
	a.next=&b;
	b.data=38;
	b.next=&c;
	c.data=64;
	c.next=&d;
	d.data=37;
	d.next=NULL;
	
	while(ptr!=NULL)
	{
		printf("address=%p ", ptr);
		printf("data=%d ", ptr->data);
		printf("next=%p \n", ptr->next);
		ptr = ptr->next;
	}
	
	return 0;
}

/*
printf("&a=%p, a.data=%d, a.next=%p\n", &a, a.data, a.next);
printf("&b=%p, b.data=%d, b.next=%p\n", &b, b.data, b.next);
printf("&c=%p, c.data=%d, c.next=%p\n", &c, c.data, c.next);
printf("&d=%p, d.data=%d, d.next=%p\n", &d, d.data, d.next);
*/
