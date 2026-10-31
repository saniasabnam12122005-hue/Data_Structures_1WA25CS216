#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head = NULL;
int count()
{
struct node *temp;
int i=1;
temp = head;
while(temp->next!=NULL)
{
temp = temp->next;
i++;
}
return(i);
}
struct node *create(int value)
{
struct node *temp;
temp = (struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("Memory allocation failed\n");
exit(0);
}
temp -> data = value;
temp -> next = NULL;
return temp;
}
void insert_begin(int value)
{
struct node *newnode;
newnode = create(value);
if(head == NULL)
{
head = newnode;
}
else
{
newnode -> next = head;
head = newnode;
}
}
void insert_end(int value)
{
struct node *newnode, * temp;
newnode = create(value);
if(head == NULL)
{
head = newnode;
}
else
{
temp = head;
while(temp -> next!=NULL)
{
temp = temp -> next;
}
temp->next = newnode;
}
}
void insert_pos(int value,int pos)
{
struct node *newnode, *temp1, *temp2;
int i,c=1;
newnode=create(value);
i=count();
if(pos==1)
{
insert_begin(value);
}
else if(pos>i+1)
{
printf("Insertion is not possible\n");
return;
}
else
{
temp1 = head;
while(c<=pos-1&&temp1!=NULL)
{
temp2=temp1;
temp1=temp1->next;
c++;
}
newnode->next=temp2->next;
temp2->next=newnode;
}
}
void display()
{
struct node *temp;
if(head==NULL)
{
printf("List is empty\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
}
int main()
{
int ch,pos,value;
do
{
printf("Enter choice\n1.Insert at beginning\n2.Insert at end\n3.Insert at position\n4.Display\n5.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the value:");
        scanf("%d",&value);
        insert_begin(value);
        break;
case 2: printf("Enter the value:");
        scanf("%d",&value);
        insert_end(value);
        break;
case 3: printf("Enter the value:");
        scanf("%d",&value);
        printf("Enter the position to insert:");
        scanf("%d",&pos);
        insert_pos(value,pos);
        break;
case 4: display();
        break;
case 5: return 0;
default : printf("Invalid choice\n");
}
}while(ch!=5);
}