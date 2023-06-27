//Q-1 Write a program to check whether a number is even or odd using the ternary operator.

#include<stdio.h>
#include<conio.h>

void main(){
int Number;
clrscr();
printf("Enter any number: ");
scanf("%d",&Number);
 (Number%2==0)?printf("This number is Even...")
	      :printf("This number is Odd...");
getch();
}