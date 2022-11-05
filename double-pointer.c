/*What is a double pointer?*/

#include <stdio.h>

int main(int argc, char *argv[])
{
  int a;
  int *b;    //アドレス変数としてのbを宣言
  int c;

  a = 101;
  c = 505;
  b = &c;    //b はcのアドレス

  printf("a = %d\n", a);
  printf("c = %d\n", *b);    //*b とすることでアドレスbの中身になる
  
  return 0;
}

