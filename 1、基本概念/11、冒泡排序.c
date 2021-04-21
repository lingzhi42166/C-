#include <stdio.h>
void main()
{
  int temp,isSorted;
  int num[] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
  //最多第九轮就能把后面的元素排好，剩下的就是最小的 所以这里10-1  最多只需要9
  for (int i = 0; i < 10 - 1; i++)
  {
    isSorted = 1;
    //每一轮都可以排好靠后的元素,如果这一轮下来都没有交换数组元素的话，就证明后面的排序正确，不需要再循环比较了
    for (int j = 0; j < 10 - 1 - i; j++)
    {
      if (num[j] > num[j+1])
      {
        temp = num[j+1];
        num[j+1] = num[j];
        num[j] = temp;
        isSorted = 0;
      }
    }
    if(isSorted)break;
  }
  for (int z = 0; z < 10 ; z++){
    printf("%d",num[z]);

  }
  getchar();
}