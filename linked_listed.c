// practice linked list 
// 刪除節點 
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

void add(NODE **start, int value);
void insert_node(NODE **start, int insert_after_value, int value);
void delete_node(NODE **start, int value);
void print_list(NODE *node);
void free_list(NODE *node);

int main(void)
{
	NODE *head = (NODE*)malloc(sizeof(NODE));
	head = NULL;
	add(&head, 5);
	add(&head, 128);
	add(&head, 41);
	print_list(head);
	insert_node(&head, 5, 10);
	printf("5後插入10:\n");
	print_list(head);
	delete_node(&head, 41);
	printf("刪除41:\n");
	print_list(head);
	free_list(&head);
	 
	return 0; 
}

// function
void add(NODE **start, int value){ //使用雙指標意義是為了執行add()後可改變head的值 
	NODE *new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = value;
	new_node->next = NULL;
	if(*start==NULL)
	{
		*start = new_node;
		return;
	}
	else
	{
		NODE *cur = (NODE*)malloc(sizeof(NODE));
		cur = *start;
		while(cur->next!=NULL)
		{
			cur = cur->next;
		}
		cur->next = new_node;
		return;
	}
}
// 
void insert_node(NODE **start, int insert_after_value, int value){
	NODE *cur = *start;
	while(cur!=NULL)
	{
		if(cur->data==insert_after_value)
		{
			NODE *new_node = (NODE*)malloc(sizeof(NODE));
			new_node->next = NULL;
			new_node->data = value;
			
			if(cur->next==NULL)
			{
				cur->next = new_node; 
				break;
			}
			else
			{
				new_node->next = cur->next;
				cur->next = new_node;
				break;
			}
		}
		cur = cur->next;
	}
	return;
} 
// delete node version1 
void delete_node(NODE **start, int value){
	NODE *cur = *start;
    NODE *pre = NULL; // 前一個節點
    
    while (cur != NULL) {
        if (value == cur->data) {
            if (pre == NULL) { // 刪除第1個節點 
                *start = cur->next; // 更新節點起始位置
            } 
			else{
                pre->next = cur->next;
            }
            free(cur);
            return; 
        }
        pre = cur;
        cur = cur->next; 
        } 
}

/*
// delete node version2 (ans) 
void delete_node(NODE **start, int value)
{
	NODE *current = *start;
	NODE *temp;

	if(value == current->data) {
		*start = current->next;
		free(current);
		return;
	}
	
	while(cur != NULL) {
		if(cur->next->data == value) {
			temp = cur->next;
			cur->next = cur->next->next;	
			free(temp);
			return;
		}
		cur = cur->next;
	}
}
*/

// printf_list
void print_list(NODE *node){
	while(node!=NULL){
		printf("address=%p, data=%d, next=%p\n", node, node->data, node->next);
		node = node->next;
	}
	return;
}

// free
void free_list(NODE *node){
	NODE *pre, *cur;
	cur = node;
	while(cur!=NULL)
	{
		pre=cur;
		cur=cur->next;
		free(pre);
	}
	return;
} 
