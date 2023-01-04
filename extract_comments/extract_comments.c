//////////////////////////////////////////////////////////
//	extract_comments.c				//
//							//
//	引数で与えたソースファイルから/* */で囲まれた箇所を	//
//	抜き出してくれるプログラム				//
//							//
//	started 2023/01/05				//
//////////////////////////////////////////////////////////

/* include files */
#include <stdio.h>
#include <stdlib.h>	/* for fopen(), exit() */

/* prototype decl. */



int
main(int argc, char *argv[])
{
  /* 定数宣言など */
  FILE *fp;
  /* エラー処理 */
  
  if(argc != 2)
    {
      printf("usage : ./extract_comments [target file]\n");
      exit(1);
    }
  
  fp = fopen(argv[1], "r");
  if(fp == NULL)
    {
      printf("file open error.\n");
      exit(1);
    }
  /* この下に実際の処理を書く */
  


  /* 後処理 */

  fclose(fp);
  return 0;
}
