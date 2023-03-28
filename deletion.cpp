/************************************************************************** 

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*****************************************************************************/
#include <stdio.h>
/**************************************************************************** 

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node {
int info;
struct node *link;
};
struct node *start=NULL,*ptr;

//function for traversing the data
void traverse()
{
if(start==NULL)
{
printf("LL is empty");
}
else
{
ptr=start;
while(ptr!=NULL)
{
printf(" %d ",ptr->info);
ptr=ptr->link;
}
}
}
//for inserting the data
void insert_at_start()
{
struct node *nptr;
nptr=(struct node *)malloc(sizeof(struct node));
//if nptr== NULL overflow
printf("\nEnter the data value for the node:" );
scanf("%d",&nptr->info );
nptr->link=start;
start=nptr;

}

void delete_last_node()
{
struct node *pptr;//for node before ptr
if(start==NULL)
{
printf("LL is Empty\n");
}
if(start->link ==NULL)
{
printf("The deleted element is :%d",start->info);
start=NULL;
}
else
{
ptr=start;
while(ptr->link!=NULL)
{
pptr=ptr;
ptr=ptr->link;
}
pptr->link=NULL;
printf("The deleted element is :%d",ptr->info);

}
}

int main()
{

printf("Hello World");
int i;
for ( int i=0; i<6; i++)
{
insert_at_start();
}

traverse();
for ( int i=0; i<3; i++)
{
delete_last_node(); }
traverse();


return 0;
}