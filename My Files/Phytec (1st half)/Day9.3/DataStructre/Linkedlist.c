#include<stdio.h>
#include<stdlib.h>


struct node 
{
	int data;
	struct node *next;
};


int main()
{
	struct node *newnode,*head,*temp;
	int choice=1,count=0;
	head=NULL;
	while(choice==1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you wish to continue\nPRESS 1 for YES and 0 for NO:");
		scanf("%d",&choice);
	}
	printf("--------------------------------------------------\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
		count++;
	}
	printf("The no. of data you have entered:%d\n",count);
}
