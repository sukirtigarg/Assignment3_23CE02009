/*Lab Assignment 2
Question No.5
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
int main()
{
    int n, a=1;
    printf("n=", n);
    scanf("%d",&n);
    if ((n&a) == a)
    printf("\nThe given number is odd.");
    else printf("\nThe given number is even.");
    return 0; 
}