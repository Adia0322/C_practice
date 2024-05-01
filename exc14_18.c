// exc14_18 
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

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
	add(&head,98);
	add(&head,76);
	add(&head,43);
	add(&head,24);
	print_list(head);
	// �`�I56�ᴡ�J�s�`�I88 
	insert_node(&head,56,88);
	printf("���J�s�`�I��\n");
	print_list(head);
	return 0;
}

void add(NODE **start, int value){
	NODE *new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = value;
	new_node->next = NULL;
	
	// 1 CASE: HEAD�S�F��
	if(*start==NULL){
		*start = new_node; 
	}
	//���F�� 
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

