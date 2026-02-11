#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
struct Node *head = NULL;
void insertEnd(int value){
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=NULL;
	if(head == NULL){
		head = newNode;
	}
	else {
		struct Node *temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
	}


}
void insertBeginning (int value){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=head;
	head=newNode;
}
void deleteNode(int value){
	struct Node *temp=head,*prev=NULL;
	while(temp!=NULL && temp->data!=value){
		head=temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=value){
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL){
		printf("value not found!\n");
		return;
	}
	prev->next=temp->next;
	free(temp);

}

void display(){
	struct Node *temp=head;
	if(temp==NULL){
		printf("List is empty!\n");
		return;
	}
	printf("Linked List: ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");

}
int main(){
	int choice, value;
	while(1){
		printf("\n--singly linked list menu--\n");
		printf("1. Insert at the beginning\n");
		printf("2. Insert at the end\n");
		printf("3. Delete a node\n");
		printf("4. Display the list\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
			printf("Enter the value to insert: ");
			scanf("%d",&value);
			insertBeginning(value);
			break;
			case 2:
			printf("Enter the value to insert: ");
			scanf("%d",&value);
			insertEnd(value);
			break;
			case 3:
			printf("Enter the value to delete: ");
			scanf("%d",&value);
			deleteNode(value);
			break;
			case 4:
			display();
			break;
			case 5:
			exit(0);
			default:
			printf("Invalid choice!\n");



		}



}}
