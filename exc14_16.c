/* prog14_6 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef NODE* NODEp;

int main(void)
{
	int i,num,val;
	NODEp fir,cur,pre;
	printf("number of nodes:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		cur = (NODE *) malloc(sizeof(NODE));
		printf("number%d:",i+1);
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
		printf("data:%d\n",cur->data);
		printf("address:%p\n",cur);
		printf("next:%p\n",cur->next);
		printf("\n");
		cur=cur->next;
	}
	system("pause");
	return 0;
}


