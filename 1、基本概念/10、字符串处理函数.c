#include <stdio.h>
#include <string.h>//专门用来处理字符串的头文件

/* 
  这里只讲述常见的
    字符串拼接： strcat()
      strcat(arrayName1, arrayName2);
      将把 arrayName2 连接到 arrayName1 后面，并删除原来 arrayName1 最后的结束标志'\0'。这意味着，arrayName1 必须足够长，要能够同时容纳 arrayName1 和 arrayName2，否则会越界（超出范围）。
      返回值为 arrayName1 的地址

    字符串复制替换：strcpy()
      strcpy(arrayName1, arrayName2);
      arrayName1会被arrayName2覆盖
      要求 arrayName1 要有足够的长度，否则不能全部装入所拷贝的字符串。

    字符串比较： strcmp()
    strcmp(arrayName1, arrayName2);
    字符本身没有大小之分，strcmp() 以各个字符对应的 ASCII 码值进行比较。strcmp() 从两个字符串的第 0 个字符开始比较，如果它们相等，就继续比较下一个字符，直到遇见不同的字符，或者到字符串的末尾。

    返回值：
    若 arrayName1 和 arrayName2 相同，则返回0；
    若 arrayName1 大于 arrayName2，则返回大于 0 的值；
    若 arrayName1 小于 arrayName2，则返回小于0 的值。
*/