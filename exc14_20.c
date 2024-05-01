// exc14_20 
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

int insertFirstNode(NODE *first, int item);
void delete_node(NODE **start, int value);
void insert_node(NODE **start, int insert_after_value, int value);
void add(NODE **start, int value);
void print_list(NODE *node);

int main(void)
{
	NODE *head = (NODE*)malloc(sizeof(NODE));
	head=NULL;
	add(&head,12);
	add(&head,43);
	add(&head,56);
	add(&head,34);
	print_list(head);
	head = insertFirstNode(head,53);
	printf("插入53\n");
	print_list(head);
	return 0;
}

void add(NODE **start, int value){
	NODE *new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = value;
	new_node->next = NULL;
	
	// 1 CASE: HEAD沒東西
	if(*start==NULL){
		*start = new_node; 
	}
	//有東西 
	else{
		NODE *cur = (NODE*)malloc(sizeof(NODE));
		cur = *start;
		while(cur->next!=NULL){
			cur = cur->next;
		}
		cur->next = new_node;
		return;
	}
}
void print_list(NODE *node){
	while(node!=NULL){
		printf("address=%p, data=%d, next=%p\n", node, node->data, node->next);
		node = node->next;
	}
	return;
}
void insert_node(NODE **start, int insert_after_value, int value){
	NODE *cur = *start;
	while(cur!=NULL){
		if(cur->data==insert_after_value){
			NODE *new_node = (NODE *)malloc(sizeof(NODE));
			new_node->data = value;
			new_node->next = cur->next;
			cur->next = new_node;
			return;
		}
		cur = cur->next;
	}
	return;
} 

void delete_node(NODE **start, int value){
	NODE *cur = *start;
	NODE *temp;
	if(cur->data==value){//刪第一個節點 
		temp = cur;
		*start = cur->next;
		free(temp);
		return;
	}
	while(cur!=NULL){
		if(cur->next->data==value){
			temp = cur->next;
			cur->next = cur->next->next;
			free(temp);
			return;
		}
		cur = cur->next;
	}
	return;
}

int insertFirstNode(NODE *first, int item){
	NODE *new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = item;
	new_node->next = first;
	return new_node;
}
