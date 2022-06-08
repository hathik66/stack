#include<stdio.h>
#define N 5
int top=-1;
int stack[N];
void push()
{
        int data;
        if(top==N-1)
        {
                printf("overflow");
        }
        else
        {
            printf("Enter the data to store into the stack: ");
            scanf("%d",&data);
            top++;
            stack[top]=data;
                
        }
        
        
}
void pop()
{
        if(top==-1)
        {
                printf("Underflow");
                
        }
        else
        {
                top--;
                printf("Element popped sucessfully\npopped element is %d",stack[top+1]);
        }
}
void find()
{
        int val;
        printf("Enter the element to be searched:");
        scanf("%d",&val);
        for(int i=0;i<N;i++)
        {
                if(stack[i]==val)
                {
                        printf("Element found at stack position: %d",i);
                }
        }
}
void display()
{
      if(top==-1)
      {
          printf("stack is empty");
      }
      
      else
      {
           printf("\nThe elements in the stack are\n ");
           for(int i=0;i<=top;i++)
           {
                printf("%d\n",stack[i]);
           }
    
      }
    
}
void findtop()
{
        printf("Top element of the stack is %d\n",stack[top]);
}

void main()
{
        int choice;
        while(1)
        {
                printf("\n1.Push\n2.Pop\n3.find\n4.findtop\n5.Display\n6.Exit\nchoice: ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                        {
                                push();
                                break;
                        }
                        case 2:
                                {
                                pop();
                                break;
                                }
                        case 3:
                        {
                               find();
                               break;
                        }
                        case 4:
                        {
                                findtop();
                                break;
                        }  
                        case 5:
                        {
                                display();
                                break;
                        } 
                        case 6:
                                printf("Exiting....");
                                break;    
                }
        }
}

