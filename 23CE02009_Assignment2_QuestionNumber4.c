/*Lab Assignment 2
Question No.4
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include<stdio.h>
int main()
{   
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if (year%100==0)
    {
        if (year%400==0)
        printf("leap year");
        else
        printf("not a leap year");
    }
    else
    { 
        if(year%4==0)
        printf("leap year");
        else 
        printf("not a leap year");
    }
    return 0;
}