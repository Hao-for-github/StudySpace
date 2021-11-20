#define _CRT_SECURE_NO_WARNINGS 1

//变量、常量
// C语言描述二者
//  常量为不能改变的量
//  变量为能改变的量

//创建一个变量
// 类型 + 变量名 = 0;  推荐
// 类型 + 变量名;      不推荐

#include <stdio.h>

//int main()
//{
//	int age = 20;
//	double weight = 75.3;  //double类型精度较高 float类型精度较低
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);  //%d 打印整型
//	printf("%lf\n", weight);  //%f 用于打印float  //%lf用于打印double
//	
//	return 0;
//}


//变量的分类
//  局部变量
//  全局变量
//
//  主要看是否在大括号里头

//全局变量 - {}外部定义的
/*int a = 100*/;

//int main()
//{
//	//局部变量 - {}内部定义的
//	int a = 10;
//	printf("%d\n", a);  //打印结果：10  //原因是当局部变量和全局变量相冲突时 局部优先
//	// in fact 不建议把全局变量和局部变量名字相冲突
//	//
//	return 0;
//}


//写一个代码求2个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);   // scanf函数在VS里会报错，要继续使用就要将 #define _CRT_SECURE_NO_WARNINGS 1 放在第一行
	sum = a + b;              //不建议用 scanf_s 因为 scanf_S 函数 是由VS编译器提供的 不是C语言标准。
	printf("sum = %d\n", sum);

	return 0;
}

