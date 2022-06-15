
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push()
{
     int val;
     printf("Enter the value to stored in the stack");
     scanf("%d",&val);
   
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;

    
    newnode->next = head;

    
    head = newnode;
}

void pop()
{
    
    struct node *temp;

    if(head == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", head->data);

        
        temp = head;

       
        head = head->next;

        
        free(temp);
    }
}

void display()
{
    struct node *temp = head;
    if(temp==NULL)
    {
        printf("The stack is empty");
    }

    
    while(temp != NULL)
    {
         printf("%d \n", temp->data);
         temp = temp->next;
    }
   
}
void findtop()
{       
        if(head==NULL)
        {
                printf("Underflow");
        }
        else
        printf("Top of the stack is %d ",head->data);
}

void  main()
{ 
    int choice;
         
    while(1)
    {
        printf("\n1.Push\n2.pop\n3.Display\n4.findtop\n5.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                        push();
                        
                        break;
                case 2:
                        pop();
                        break;
                 case 3:
                        display();
                        break;
                 case 4:
                        findtop();
                        break;
                 case 5:
                        printf("Exiting...");
                        break;
                 default:
                        printf("Invalid options");
                 
        }
        
        
    }
    
}
