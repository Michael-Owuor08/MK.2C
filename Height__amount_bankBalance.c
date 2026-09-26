/*
Author:Michael 
Reg number:BCS-01-0001/2026
Description:Program to display prompt details on the screen 
Date:21/09/2026
version 1
*/

#include <stdio.h>

int main(){

float height; char meter='m'; int amount; char Ksh[4]="Ksh"; char number[11];

printf("My height is:\t"); scanf ("%f",&height);

printf("My bank account balance is:\t"); scanf("%d",&amount);

printf("My phone number is:\t"); scanf("%s",number);

printf ("\nMy height is:%.2f%c\n",height, meter); printf("My bank account balance is:%.2d%s\n", amount, Ksh); printf("My phone number is:%s\n", number);

return 0; }
