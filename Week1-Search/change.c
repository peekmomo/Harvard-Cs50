#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int mony=get_int("please input ypur mony");
  int coins=0;
  while(mony>=25){
    mony=mony-25;
    coins++;
  }
  while(mony>=10){
    mony=mony-10;
    coins++;
  }
  while(mony>=5){
    mony=mony-5;
    coins++;
  }
  while(mony>=1){
    mony=mony-1;
    coins++;
  }
  printf("%d\n",coins);
}
