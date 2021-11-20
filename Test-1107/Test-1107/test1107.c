#include <stdio.h>

//Hello world
int main() 
{
	printf("Hello World!\n");
	return 0;
}


//数据类型
int main()
{
	
	// 'a' - 是字符a
	char ch = 'a';  //ch是我所创建的空间 char是字符类型

	int age = 20; //整型

	short num = 10; //短整型

	//long 长整型
	//long long 更长的整形

	float weight = 55.5; //单精度浮点型
	double d = 0.0; //双精度浮点型
}


//每种数据类型的大小  //有多种数据类型是因为避免空间的浪费 从而使空间利用率更高 ps: 1byte用long
int main()
{
	printf("haha/n");
	printf("%d\n", 100); //打印一个整数 - %d
	
	//sizeof - 是关键字 - 是操作符 - 是计算类型或者变量所占空间的大小 - 单位是 字节 bit
	printf("%d\n", sizeof(char)); // 1字节
	printf("%d\n", sizeof(short)); // 2字节
	printf("%d\n", sizeof(int)); // 4字节
	printf("%d\n", sizeof(long)); // 4字节  实际上C语言标准 sizeof(long)>=sizeof(int) 就可以了
	printf("%d\n", sizeof(long long)); // 8字节
	printf("%d\n", sizeof(float)); // 4字节
	printf("%d\n", sizeof(double)); // 8字节
	return 0;
}


//计算机中的单位：
//bit - 比特位（最小单位） //有多大？ 计算机中识别二进制的 0/1 一个0 / 一个1 占一个bit
//byte - 字节 = 8bit
//kb = 1024byte
//mb = 1024kb
//gb = 1024mb
//tb = 1024gb
//pb = 1024tb


//in fact 类型其实是用来创建变量的
//比如 当要创建整形变量时用 int
//     当要创建字符变量时用 char