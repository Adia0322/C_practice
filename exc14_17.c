// exc14_17
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

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
	add(&head,98);
	add(&head,76);
	add(&head,43);
	add(&head,24);
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
/*
void print_list(NODE *node){
	NODE *cur = node;
	while(cur!=NULL){
		printf("data:%d ", cur->data);
		printf("next:%p\n", cur->next);
		cur = cur->next;
	}
	return;
}
*/ 
