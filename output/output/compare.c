#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum;
    printf("Enter the two numbers a and b: ");
    scanf("%d%d",&a,&b);
    
    if(a=b)
    {
        printf("%dThe given two numbers are equal%d\t\n",a,b);
    }
    if(a!=b)
    {
        printf("%dThe given two numbers are not equal%d",a,b);
    }
    if(a>b)
    {
        printf("%dThe a is greater than b%d",a,b);
    }
    if(a<b)
    {
        printf("%dThe b is greater than a%d",a,b);
    }
    if(a<=b)
    {
        printf("%dThe b is greater than equal to a%d",a,b);
    }
    if(a>=b)
    {
        printf("%dThe a is greater than equal to b%d",a,b);
    }
}