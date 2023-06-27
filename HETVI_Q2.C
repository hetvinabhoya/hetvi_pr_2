#include<stdio.h>
#include<conio.h>

void main(){
int unit;
float Amount,Surcharge,Total;
clrscr();
printf("Enter the Electricity units: ");
scanf("%d",&unit);
   if(unit<=50){
      Amount=unit * 0.50;
   }else if(unit<=150){
      Amount=25+(unit-50) *0.75;
   }else if(unit<=250){
      Amount=100+(unit-150) *1.20;
   }else if(unit>=250){
      Amount=220+(unit-250) *1.50;
   }

      Surcharge=Amount *0.20;
      Total= Amount+Surcharge;

   printf("Electricity Bill = %f",Total);
getch();
}


/* Enter the Electricity units: 435
   Electricity Bill = 597.000000
*/
