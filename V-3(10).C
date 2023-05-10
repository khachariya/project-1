#include<stdio.h>
#include<conio.h>

main()
{

 int a,b,c;
 clrscr();
 printf("Enter  value a=");
 scanf("a=%d",&a);
 printf("enter value b=");
 scanf("b=%d",&b);
 c=a;
 a=b;
 b=c;
 printf("swap a variable=%d\n second variable=%d",a,b);

 getch();
}