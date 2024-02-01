/*Lab Assignment 2
Question No.7
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 19/1/24*/

#include <stdio.h>
#include <math.h>
int main()
{
    float mp;
    printf("\nEnter the meal cost: ");
    scanf("%f", &mp);
    float tip = (mp * 15) / 100;
    float tap = (mp * 8) / 100;
    float total = (mp + tip + tap);
    float total_amount = round(total);
    printf("\nTip: %f\nTap: %f\nTotal: %f\nTotal amount to be paid: %.0f\n", tip, tap, total, total_amount);
    return 0;
}