/*Lab Assignment 2
Question No.6
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    (a<100 || a>200) ? printf("The number is not within the range.") : (a%2 != 0) ? printf("The number is odd") : printf("The number is not odd");
    return 0; 
}