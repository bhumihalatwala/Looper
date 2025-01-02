#include<stdio.h>
#include<conio.h>

//skip 3 alphabets from a to z
main()
{
  char ch = 'a';
  clrscr();

  do
  {
    printf("%c\t",ch);
    ch+=4;
  } while(ch<='z');

  getch();
}