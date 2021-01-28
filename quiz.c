#include <stdio.h>
int main()
{
int s=0;
int a;

printf("Welcome to the C quiz\nThe quiz has 5 basic questions on the C Programming Language. You get +3 for each correct answer & -1 for each wrong/invalid answer.\n");

printf("\nQ1) In C language , constant is defined \n");
printf("[1]Before Main\t[2]After Main\n[3]Anywhere\t[4]None of these\n");
scanf("%d", &a);

if(a==3)
{
printf("That’s Correct!\n");
s=s + 3;
}
else
{
printf("Wrong Answer\n");
s=s - 1;
}

printf("\nQ) Which one of the following is a loop construct that will always be executed once?\n");
printf("[1]for\t[2]While\n[3]Switch\t[4]Do while(?)\n");
scanf("%d", &a);

if(a==4)
{
printf("That’s Correct!\n");
s=s + 3;
}
else
{
printf("Wrong Answer\n");
s=s - 1;
}

printf("\nQ) How many characters can a string hold when declared as follows?char name[20]:\n");
printf("[1]10\t[2]15\n[3]20\t[4]25\n");
scanf("%d", &a);

if(a==3)
{
printf("That’s Correct!\n");
s=s + 3;
}
else
{
printf("Wrong Answer\n");
s=s - 1;
}

printf("nQ)Directives are translated by the ?\n");
printf("[1]Pre Processor\t[2]Compiler\n[3]Linker\t[4]Editor\n");
scanf("%d", &a);

if(a==1)
{
printf("That’s Correct!\n");
s=s + 3;
}
else
{
printf("Wrong Answer\n");
s=s - 1;
}

printf("\nQ)Which of these concepts is NOT supported by C ?\n");
printf("[1]Pointers\t[2]Functions\n[3]Strings\t[4]Namespaces\n");
scanf("%d", &a);

if(a==4)
{
printf("That’s Correct!\n");
s=s + 3;
}
else
{
printf("Wrong Answer\n");
s=s- 1;
}

printf("\nThank You for taking the Quiz.\n Your Total Score is %d out of 15", s);
}