#include<stdio.h>
#define N 5
int queue_array[N];
int front=-1;
int rear=-1;
void insert()
{
if(rear==N-1)
{
printf("Queue is full\n");
}
else if(front==-1&&rear==-1)
{
int ele;
printf("Enter element to insert:");
scanf("%d",&ele);
front=rear=0;
queue_array[rear]=ele;
}
else
{
int ele;
printf("Enter element to insert:");
scanf("%d",&ele);
rear++;
queue_array[rear]=ele;
}
}
void delete()
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
front++;
}
}
void display()
{
if(front==-1&&rear==-1)
{
printf("Queue is empty\n");
}
else
{
int i;
printf("Elements are:\n");
for(i=front;i<rear+1;i++)
{
printf("%d\n",queue_array[i]);
}
}
}
int main()
{
int ch;
while(1)
{
printf("Enter choice:\n1.insert\n2.delete\n3.display\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
       break;
case 2:delete();
       break;
case 3:display();
       break;
case 4:return 0;
}
}
}