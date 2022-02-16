#include<stdio.h>  
void change(int *num,int *num1)
{    
    int temp=0;
    printf("Before swaping the values in function num=%d num1=%d\n",*num,*num1);    
    temp=*num;
    *num=*num1;
    *num1=temp;    
    printf("After swapping value inside function num=%d num1=%d\n", *num,*num1);    
}      
int main() {    
    int x=100,y=200;    
    printf("Before function call x=%d %d\n", x,y);    
    change(&x,&y);//passing reference in function    
    printf("After function call x=%d y=%d\n", x,y);    
return 0;  
}    
