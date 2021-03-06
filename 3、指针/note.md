## 指针
### 指针是什么
  指针就是地址，地址就是内存单元编号
  地址:
    内存单元的编号
    从零开始的非负整数
    范围:
      32位系统就是0->4G
      64位系统就是0->16TB（理论值）
      
#### 变量是怎么找到值的
  就是通过其对应的指针得到对应的地址，也就找到内存单元编号

#### 指针变量是什么
  指针变量就是存放地址(内存单元编号)的变量

### 指针的分类
1. 基本类型指针
2. 指针和数组
3. 指针和函数
4. 指针和结构体
5. 多级指针
### 指针可以用来干嘛
  + 表示一些复杂的数据结构
  + 快速传递数据
  + 使返回能够return一个以上的值
  + 能够直接访问硬件
  + 能够方便处理字符串
  + 是理解面向对象语言中引用的基础

### 动态分配内存注意事项
**为什么越界操作后，释放会报错，以及为什么有时候会报错，有时候不会**

**为什么越界操作后，释放会报错**
1、第一种说法
在分配堆内存空间时，malloc会自己管理一个链表用来维护堆中的内存（这种维护可以管理内存碎片，可以提高内存的利用率），由于malloc通过链表来维护，就必不可少的会利用空间来存放next指针域，这个next指针域就紧紧的挨在malloc分配的内存的后面。
所以，如果越界访问malloc分配的内存空间，就会破坏next域，从而破坏了链表结构

2、第二种说法
动态分配内存空间，实际上会在返回的地址前后分配额外的内存，用于记录申请空间的大小等元信息
如果越界访问改写了额外的内存，free()是会出错的，因为free就依赖这里的信息。

**为什么有时候会报错，有时候不会**
(这个答案可以从原版的《深入理解计算机系统》P878 得到答案。)
Malloc 提供给您的块保证是对齐的，这样它就可以保存任何类型的数据。在 GNU 系统中，32位系统地址总是上8的倍数的块，64位系统上是16的倍数的块。(window 和 linux系统不知道)
也就是说系统会根据我们请求分配的块以及内存空闲块大小来决定是否以及如何对齐。所以实际上返回的内存块有可能是会比我们请求的大，因为系统为了对齐进行了操作。《深入理解计算机系统》P878
所以就能够解释，为什么有些时候越界操作，不会报错，而有些时候就会报错。
什么是内存对齐
  cpu在读取内存时是一块一块进行读取的，块的大小可以是2，4，8，16（总之是2的倍数）。因此CPU在读取内存时是一块一块进行读取的
  假设CPU要读取一个int型4字节大小的数据到寄存器中，分两种情况讨论：

    1、数据从0字节开始
    2、数据从1字节开始
    再次假设内存读取粒度为4。

    当该数据是从0字节开始时，很CPU只需读取内存一次即可把这4字节的数据完全读取到寄存器中。

    当该数据是从1字节开始时，问题变的有些复杂，此时该int型数据不是位于内存读取边界上，这就是一类内存未对齐的数据。

    此时CPU先访问一次内存，读取0—3字节的数据进寄存器，并再次读取4—5字节的数据进寄存器，接着把0字节和6，7，8字节的数据剔除，最后合并1，2，3，4字节的数据进寄存器。对一个内存未对齐的数据进行了这么多额外的操作，大大降低了CPU性能。

**动态内存分配为什么要对齐**
1. 为了提取数据的效率(内存是一块块的提取数据的)
2. 为了这块内存能尽可能的存储各种数据类型
