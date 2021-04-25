#include <stdio.h>
/* 
  指针变量占用的字节:
    不同类型的指针变量占用的字节始终是一样的，64位占用的是8个字节，32位占用的是4个字节。

*/
void main(){
  int i = 1;
  double db = 6.6;
  long int lgi= 666;
  char ch = 'c';
  int *p = &i;
  double *r = &db;
  long int *li = &lgi;
  char *chr = &ch;
  printf("%d,%d,%d,%d\n",sizeof(i),sizeof(db),sizeof(lgi),sizeof(ch));//4 8 4 1

  printf("%d,%d,%d,%d\n",sizeof(p),sizeof(r),sizeof(li),sizeof(chr));//8 8 8 8 
  getchar();
}