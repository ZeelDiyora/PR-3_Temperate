//Write a program to count the total number of digits in a number.

#include<stdio.h>
#include<conio.h>

void main(){
int r,s=0;
clrscr();

printf("Enter any number : ");
scanf("%d",&r);

while(r!=0){
   r=r/10;
   s++;
}

printf("The digits are %d",s);
getch();
}


