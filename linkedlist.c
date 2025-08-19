#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
node*head=NULL;
int main(){
    node*p,*q,*newnode;
    int i,n;
    printf("Enter total elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
node*newnode;
newnode=(node*)malloc(sizeof(node));
printf("Enter data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{ 
head=newnode;
p=newnode;
}
else
{
p->next=newnode;
p=p->next;
}
}
printf("The linked list is:\n");
q=head;
while(q!=NULL)
{
    printf("%d ",q->data);
    q=q->next;
}
return 0;
}