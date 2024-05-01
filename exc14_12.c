/* exc14_12 */
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
	int i,num;
	NODE *fir,*cur,*pre;
	
	printf("enter the number of nodes:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		cur = (NODE *) malloc(sizeof(NODE));
		printf("enter the data of node:");
		scanf("%d",&(cur->data));
		if(i==0)
		{
			fir=cur;
		}
		else
		{
			pre->next=cur;
		}
		cur->next=NULL;
		pre=cur;
	}
	
	cur=fir;
	while(cur!=NULL)
	{
		printf("address:%p, data:%d, next:%p\n",cur,cur->data,cur->next);
		cur=cur->next;
	}
	
	return 0;
}
