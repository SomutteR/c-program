#include<stdio.h>
#include<conio.h>
int main()
{
    int pass=0,fail=0,student=1,grade;
    while(student<=10)
    {
        printf("Enter 1 for pass and 2 for fail: ");
        scanf("%d",&grade);
        if(grade==1)
        {
            pass=pass+1;
        }
        else if(grade==2)
        {
            fail=fail+1;
        }
        else
        {
            printf("Enter the valid grade");
        }
        student=student+1;
    }
    printf("The total passed students are:%d\n ",pass);
    printf("The total failed students are: %d\n ",fail);
}