//Write a program to print all alphabets from a to z by skipping 3 alphabets using do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
char z;

clrscr();
printf("*************************************************\n");
printf("All alphabets from a to z by skipping 3 alphabets\n");
printf("*************************************************\n");
for(z='a';z<='z';z++){
    printf("%c\n",z);
    z+=3;
}

getch();
}