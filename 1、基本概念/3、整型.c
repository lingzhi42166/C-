#include <stdio.h>
/* 
  ������������:
    int:        ռ��2��4���ֽ�  ��ͬ�Ļ����³��Ȳ�ͬ
    short int:  ֻռ��2���ֽ�   ���Լ�дΪshort
    long int:   ���ڵ���int���� ��ͬ�Ļ����³��Ȳ�ͬ  ���Լ�дΪlong

    C���Բ�û���ϸ�涨 short��int��long �ĳ��ȣ�ֻ���˿��������ƣ�
      1��short ����ռ�� 2 ���ֽڡ�
      2��int ����Ϊһ�������ֳ���32 λ�����»����ֳ�Ϊ 4 �ֽڣ�64 λ�����»����ֳ�Ϊ 8 �ֽڡ�
      3��short �ĳ��Ȳ��ܴ��� int��long �ĳ��Ȳ���С�� int��
      �ܽ�:
        2 �� short �� int �� long

    short��int��long ��C�����г������������ͣ����� int ��Ϊ���ͣ�short ��Ϊ�����ͣ�long ��Ϊ�����͡�
    short ���Խ�ʡ�ڴ棬long �������ɸ����ֵ��
    
    ͨ��sizeof�������鿴ָ�����������͵ĳ���
    (һ����������ռ�õ��ֽ�������Ϊ���������͵ĳ���)


    ���ִ�����ϵͳ�У�int һ��ռ�� 4 ���ֽڣ�Byte�����ڴ棬���� 32 λ��Bit��������������������������е�λ��Ϊ 1 ʱ����ֵ���Ϊ 232-1 = 4,294,967,295 �� 43�ڣ�����һ���ܴ������ʵ�ʿ����к����õ��������� 1��99��12098 �Ƚ�С����ʹ��Ƶ�ʷ����ϸߡ�
    ʹ�� 4 ���ֽڱ����С�������´����࣬����г��������ֽ�������Щ�ֽھͰװ��˷ѵ��ˣ������ٱ���������ʹ�á����ڸ��˵��Ե��ڴ涼�Ƚϴ��ˣ����õ͵�Ҳ�� 2G���˷�һЩ�ڴ治��������Ե���ʧ������C���Ա����������ڣ������ڵ�Ƭ����Ƕ��ʽϵͳ�У��ڴ涼�Ƿǳ�ϡȱ����Դ�����еĳ����ھ�����ʡ�ڴ档

*/
void main()
{
  int num1 = 1;
  short int num2 = 1;
  long int num3 = 1;
  printf("��ƽ̨��int �ĳ���=%d\n", sizeof(int));
  printf("int �ĳ���=%d\n", sizeof(num1));
  printf("short int �ĳ���=%d\n", sizeof(num2));
  printf("long int �ĳ���=%d\n", sizeof(num3));

  getchar();
}