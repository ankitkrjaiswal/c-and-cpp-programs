#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int val)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(front==NULL)
	{
		rear=front=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=rear->next;
	}
    
	printf("%d Inserted\n",val);
}
void dequeue()
{
	if(front==NULL)
	printf("Underflow\n");
	else
	{
		struct node *temp;
	    temp=front;
	    front=front->next;
	    free(temp);
	    printf("Deleted\n");
    }
}
void display()
{
	if(front==NULL)
	printf("Empty\n");
	else
	{
		struct node *temp;
		temp=front;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
	
}
int main()
{
    int choice,val,x=1;
	while(x)
	{
		printf("1.Enqueue\n");
	    printf("2.Dequeue\n");
	    printf("3.Display\n");
        printf("4.Exit\n"); 
        scanf("%d",&choice);
        switch(choice){
        	case 1:
        		printf("Enter Element you want to insert :");
        		scanf("%d",&val);
        		enqueue(val);
        	    break;
        	case 2:
        		dequeue();
        		break;
        	case 3:
        		display();
        		break;
        	case 4:
        		x=0;
        		break;
		}
	}
	
}
