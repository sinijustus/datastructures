
#include <stdio.h>
int q[10],front=0,rear=0,n,op;
void nqueue();
void dqueue();
void display();
void main()
{
    printf("enter the size of the queue");
    scanf("%d",&n);
    printf("queue operations are\n 1.ENQUEUE\n 2.DEQUEUE\n 3.DISPLAY\n 4.EXIT\n");
    do 
{
    printf("enter your choice:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            if(rear==n)
                printf("queue over flow");
            else
                nqueue();
                break;
        case 2:
            if (front<=0)
                printf("queue underflow");
            else
                dqueue();
                break;
        case 3:
                display();
                break;
        case 4:
                printf("exit\n");
                break;
        default:
                printf("enter a valid choice");
        
    }}
    while(op!=4);
    
}
void nqueue(){
    int item;
    printf("enter the item to insert:");
    scanf("%d",&item);
    if(front==0&&rear==0){
        front=rear=1;
        q[rear]=item;}
    else{
        rear++;
        q[rear]=item;}}
void dqueue(){
    if(front==rear){
        printf("deleted element is %d\n",q[front]);
        front=rear=0;}
    else{
        printf("deleted element is %d\n",q[front]);
        front++;}}
void display()
{
    if(front>0)
    {
        printf("elements of queue are:\n");
        for(int i=front;i<=rear;i++)
            printf("%d/n",q[i]);
            
    
    }
}
