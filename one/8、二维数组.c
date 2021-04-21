#include <stdio.h>
/* 
  二维数组:
    dataType arrayName[length1][length2];
    各个元素的类型必须相同

*/
void main()
{
  // 二维数组的初始化可以按行分段赋值，也可按行连续赋值。
  // 定义一个整型二维数组 按行分段赋值
  int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
  // 按行连续赋值  
  int array1[2][3] = {1, 2, 3, 4, 5, 6};
  // 按行连续赋值 第一维的长度可以不用给出  会自动根据第二维的长度 分配第一维的长度。
  int array2[][3] = {1, 2, 3, 4, 5, 6};

  printf("array[1][2]=%d",array[1][2]);
  printf("array1[1][2]=%d",array1[1][2]);
  printf("array2[1][2]=%d",array1[1][2]);
  printf("array2[1]=%d",array1[1][2]);
  getchar();
}