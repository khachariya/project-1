#include<stdio.h>
#include<conio.h>

main()
{
  int base_salary,hra,da,ta,gross_salary;
  clrscr();
  printf("enter base salary=");
  scanf("%d",&base_salary);
  printf("enter hra=");
  scanf("%d",&hra);
  printf("entar da=");
  scanf("%d",&da);
  printf("enter ta=");
  scanf("%d",&ta);

  gross_salary=base_salary+hra+da+ta;
  printf("total gross_salary=%d",gross_salary);

  getch();
}