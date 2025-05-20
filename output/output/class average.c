#include<stdio.h>
#include<conio.h>
int main()
{
    int counter=1,Total=0,average,grade;
    while(counter<=10)
    {
        printf("Enter the grade: ");
        scanf("%d",&grade);
        Total=Total+grade;
        counter=counter+1;
    }
    average=Total/10;
    printf("class average is: %d",average);
}