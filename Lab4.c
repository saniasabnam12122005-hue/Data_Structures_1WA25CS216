#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
if(front==-1&&rear==-1)
{
front=rear=0;
queue[rear]=x;
}
else if(front==(rear+1)%N)
{
printf("Queue is full\n");
}
else
{
rear=(rear+1)%N;
queue[rear] = x;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("Queue is empty\n");
}
else if(front==rear)
{
front=rear=-1;
}
else
{
front=(front+1)%N;
}
}
void peek()
{
if(front==-1&&rear==-1)
{
printf("Queue is empty\n");
}
else
{
printf("%d\n",queue[front]);
}
}
void display()
{
if(front==-1&&rear==-1)
{
printf("Queue is empty");
}
else
{
int i=front;
printf("Queue elements are:\n");
while(i!=rear)
{
printf("%d\n",queue[i]);
i=(i+1)%N;
}
printf("%d\n",queue[rear]);
}
}
int main()
{
int ch,n;
while(1)
{
printf("Enter choice:\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter element to enqueue:");
        scanf("%d",&n);
        enqueue(n);
        break;
case 2: dequeue();
        break;
case 3: peek();
        break;
case 4: display();
        break;
case 5: return 0;
}
}
}
