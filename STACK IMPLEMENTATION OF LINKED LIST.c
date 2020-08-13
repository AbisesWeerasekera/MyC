#include<stdio.h>
#include<stdlib.h>
// stack implementation using linked list
void push();
void pop();
void traverse();




struct node{
	int data;
	struct node *next;
};

struct node *top=NULL;

void push(){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("enter a node data\n");
	scanf("%d",&new_node->data);
	new_node->next=top;
	top=new_node;
}

void pop(){
	struct node *new_node;
	if(top==NULL){
		printf("No elements do delete\n");
		
	}else{
		new_node=top;
		printf("deleted element is %d",new_node->data);
		top=top->next;
		new_node->next=NULL;
		free(new_node);
}
}
void traverse(){
	
	struct node *new_node;
	if(top==NULL){
		printf("No elements to show\n");
	}else{
		new_node=top;
		while(new_node!=NULL){
			printf("%d\t",new_node->data);
			new_node=new_node->next;
		}
	}
	
}
	
void main(){
	int ch=1;
	printf("\n\n -------Stack Implementation of Linked List--------\n\n");
while(ch!=0){


	printf("\n\n ***Main Menu*** \n\n ");
	printf("\nenter your choice\n\n\n");
	printf("\n1.push\n2.pop\n3.traverse\n0.Exit\n\n");
	
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			traverse();
			break;
		case 0:
			printf("exit the mission\n");
			break;
		default:
			printf("input number is wrong\n");
	}
		
	}
printf("Good bye\n");
}


