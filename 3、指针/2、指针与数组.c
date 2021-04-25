#include <stdio.h>
/* 
  指针和数组
    指针和一维数组:
      一维数组名是个指针常量 ，存放的是一维数组第一个元素的地址。
      因为数组的内存是连续的，所以数组元素之间相互挨着。
      所以就饿可以通过 指针变量+1 => +这个指针所对应的类型的长度   获取下一个元素的地址。
      比如整型指针变量+1 => 在这个地址基础上+4个字节(不同机器整型变量的长度也不同，一般为4)

      下标和指针的关系:
        如果p是一个指针变量，则 p[i] => *(p+i)
        下标最终转换成指针
      
    指针和二维数组:




*/
void main()
{
  int arr[] = {1, 2, 3};
  printf("%p\n", &arr[0]);
  printf("%p\n", &arr[1]);
  printf("%p\n", arr);
  printf("%p\n", arr + 1);

  getArray(arr, sizeof(arr));
  getchar();
}
/* 
  通过指针访问别的局部作用域的数组
    因为一维数组的变量名存储的是第一个元素的地址，所以无法通过传参的形式获取。

*/
void getArray(int *arr, int len)
{
  printf("%d\n",len);//12
  len = len / 4;
  printf("%d\n", *arr);
  printf("%d\n", *(arr + 1)); //通过arr+1就可以在arr的基础上 + 一个整型的长度 就得到下一个元素的地址
  printf("%d\n", arr[1]); //等价于上面，因为arr是指针变量，arr[i] => *(arr+i)

  for (int i = 0; i < len; i++)
  {
    printf("== %d\n", *(arr + i));
    printf("---%d\n", arr[i]); 

  }
}

