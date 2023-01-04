#include <stdio.h>

int main(int argc, char *argv[])
{
  char message[] = "Hello, I am a TCPserver.";
  printf("%s\n", message);
  printf("sizeofmessage is %d\n", (int)sizeof(message));    
  return 0;
}
