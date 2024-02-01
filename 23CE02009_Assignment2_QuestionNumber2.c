/*Lab Assignment 2
Question No.2
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the numbers a, b, c ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n%d", (a>=b) && (a>=c)? a : (b>=a) && (b>=c)? b :(c>=a) && (c>=b)? c : (a=b=c));
    return 0;
}