#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>90)
    {
        printf("Your marks are %d and your grade is A ",marks);
    }
    else if(marks<90 && marks>80)
    {
        printf("Your marks are %d and your grade is B ",marks);
    }
    else if(marks<80 && marks>60)
    {
        printf("Your marks are %d and your grade is C ",marks);
    }
    else if(marks<60 && marks>40)
    {
        printf("Your marks are %d and your grade is D ",marks);
    }
    else
    {
        printf("Your marks are %d and your are FAIL ",marks);
    }
}