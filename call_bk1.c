#include<stdio.h>

void sum(int x,int b);
void sub(int x,int y);
void display(void *fptr(int,int));
void main()
{
display(sum);
display(sub);
}

void sum(int x,int y)
{
printf("sum of number %d\n",x+y);
}
void sub(int x,int y)
{
printf("sub of number %d\n",x-y);
}
void display(void *fptr(int,int))
{
*fptr(5,4);
}
