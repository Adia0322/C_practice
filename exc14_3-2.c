/* exc14_13 ans */
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;


int main(void)
{
	NODE *ptr = (NODE *) malloc(4*sizeof(NODE)); 
	NODE *newnode = (NODE *) malloc(sizeof(NODE)); 
	NODE *cur = (NODE *) malloc(sizeof(NODE)); 
	cur = ptr;
	
	ptr->data = 12;
	ptr->next = (ptr+1);
	(ptr+1)->data = 38;
	(ptr+1)->next = (ptr+2);
	(ptr+2)->data = 64;
	(ptr+2)->next = (ptr+3);
	(ptr+3)->data = 37;
	(ptr+3)->next = NULL;
	
	printf("before\n");
	while(cur!=NULL)
	{
		printf("address=%p, data=%d, next=%p\n",cur,cur->data,cur->next);
		cur = cur->next;
	}
	
	// 加入新節點 47
	(ptr+1)->next = newnode;
	newnode->data = 47;
	newnode->next = (ptr+2); 
	
	cur = ptr;
	printf("after\n");
	while(cur!=NULL)
	{
		printf("address=%p, data=%d, next=%p\n",cur,cur->data,cur->next);
		cur = cur->next;
	}
	
	free(ptr);
	free(cur);
	free(ptr);
	system("pause");
	return 0;
}
