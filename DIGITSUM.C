#include<stdio.h>
#include<conio.h>

//add first and last digits of a given number
main()
{
  int num,first,last,sum=0;
  clrscr();

  Number:
  printf("Enter any number: ");
  scanf("%d",&num);

  if(num<=0)
  {
    goto Number;
  }
  else
  {
    last = num%10;

    while(num/10 != 0)
    {
      num=num/10;
    }
    first = num;
    sum = first + last;
    printf("The sum of first and last digit is: %d",sum);
  }
  getch();
}