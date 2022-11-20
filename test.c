#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	/*char ch = 'A';*/
//	/*int age = 20;
//	printf("%d\n",age);*/
//	/*long num = 100;*/
//	float f = 5.0;
//	printf("%f\n", f);
//	return 0;
//}
////int main()//主函数-程序的入口-main函数有且只有一个
////{
////	//int是整型的意思
////	//
////	printf("hello world\n");//\n表示换行
////	return 0;//返回0
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf输入函数；&取地址符号
//	
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}
int main()
{
	extern int g_val;//extern声明外部符号
	printf("g_val = %d\n", g_val);
	return 0;
}