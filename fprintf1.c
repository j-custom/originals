#include <stdio.h>
int main(int argc, char *argv[])
{
  FILE *fp;
  char name[20];
  int age;
  if ((fp=fopen("girl.dat", "w")) != NULL){
    while (scanf("%s %d", name, &age) != EOF)
      fprintf(fp, "%s %d\n", name, age);
    fclose(fp);
  }
  return 0;
}
