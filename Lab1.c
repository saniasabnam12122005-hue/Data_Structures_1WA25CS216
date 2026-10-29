#include<stdio.h>
#define MAX 5
int stack[MAX], top = -1;

void push(int ele)
{
if (top == MAX-1)
{
printf("Overflow condition\n");
}
else
{ 
printf("Element added\n");
stack[++top] = ele;
}
}
void pop()
{
if (top==-1)
{
printf("Underflow condition\n"); 
}
else
{
printf("Element removed: %d\n", stack[top--]);
}
}
void display()
{
if (top==-1)
{
printf("Stack is empty\n"); 
}
else
{
int i;
printf("Stack elements are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n", stack[i]);
}
}
}
void peek()
{
if(top==-1)
{
printf("Stack is empty\n");
}
else 
{
printf("Peeked: %d\n",stack[top]);
}
}
int main()
{
int ele,ch;
while(1)
{
printf("Enter choice:\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
scanf("%d", &ch);
switch(ch)
{
case 1: printf("Enter element to be insert: ");
	scanf("%d", &ele);
	push(ele);
	break;
case 2: pop();
	break;
case 3: peek();
	break;
case 4: display();
	break;
case 5: return 0;
default: printf("Invalid choice\n");
}
}
}