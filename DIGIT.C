#include<stdio.h>
#include<conio.h>

//count digits in a given number
main()
{
  int num,count=1;
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
    while(num/10 != 0)
    {
      num=num/10;
      count++;
    }
    printf("Total digits are: %d",count);
  }
  getch();
}