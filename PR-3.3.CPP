//Write a program to find the sum of a first and the last digit of a number.

#include<stdio.h>
#include<conio.h>

void main();
int p,q,r,s;
clrscr();

printf("Enter any number : ");
scanf("%d",&p);

r=p%10;

while(p>10){
q=p/10;
p=q;
}
s=q+r;

printf("Sum of first and the last digit is %d",s);

getch();
}