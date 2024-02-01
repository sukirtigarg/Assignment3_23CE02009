/*Lab Assignment 2
Question No.3
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
int main()
{
    long int a;
    printf("Enter the number of days:");
    scanf("%ld", &a);
    int y = a/365;
    int ry= a%365;
    int m= ry/30;
    int rm= m%30;
    int w= rm/7;
    int d= w%7;
    printf("No. of years: %d years\nNo. of months: %d months\nNo. of weeks: %d weeks\nNo. of days: %d days", y, m, w, d);
    return 0;
}