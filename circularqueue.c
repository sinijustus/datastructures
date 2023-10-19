#include<stdio.h>
int q[100],i,op,n,rear=-1,front=-1;
void insert();
void delete();
void display();
void main()
{
    printf("enter the size of queue:");
    scanf("%d",&n);
    printf("operations are\n 1.insert\n 2.delete\n 3.display\n 4.exit");
    do
{
    printf("enter your choice:\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            if((rear+1)%n==front)
                printf("queue overflow\n");
            else
                insert();
            break;
        case 2:
            if(front==-1)
                printf("queue underflow\n");
            else
                delete();
                break;
        case 3:
            if(front==-1)
                printf("queue empty");
            else
                display();
                break;
        case 4:
            printf("exit\n");
            break;
        default:
            printf("enter a valid choice");
    }}while(op!=4);
}
void insert()
{
    int item;
    printf("enter the item to insert:");
    scanf("%d",&item);
    if(front==-1&&rear==-1)
    {
        front=0;rear=0;
        q[rear]=item;
    }
}
void delete()
{
    if(front==rear)
    {
        printf("the deleted element is %d",q[front]);
        front=-1;rear=-1;
    }
    else
    {
        printf("the deleted element is %d",q[front]);
        front=(front+1)%n;
    }
}
void display()
{
    int i;
    printf("the elements are\n");
    for(i=front;i!=rear;i=(i+1)%n)
    {
        printf("%d\n",q[i]);
    }
    printf("&d\n",q[i]);
    }
}
    }
    }
}
    }
