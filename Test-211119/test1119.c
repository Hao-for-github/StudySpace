#include <stdio.h>

//作用域和生命周期
//  作用域：哪里可以使用，哪里就是作用域
//
//    局部变量的作用域：就是变量所在的局部范围
//    全局变量的作用域：整个工程（跨 .C文件调用变量要先用 extern 加以声明 // extern int g_val 


int g_val = 1000;
int main()
{
    printf("1 : %d\n", g_val);  //全局变量第一次print

        {
            int a = 10;   //此时 定义的变量 a 作用域仅在此框内
            printf("a=%d\n", a);

            printf("2 : %d\n", g_val);  //全局变量第二次print
        }
    printf("3 : %d\n", g_val);  //全局变量第三次print

    return 0;
    }

//  生命周期
//    局部变量的生命周期：进入（所在的）作用域生命··开始，出···作用域生命··结束
//    全局变量的生命周期：整个程序的生命周期



//常量
     int main()
    {  //  1、字面常量
              3.14;   //浮点型常量
              10;  //整型常量
              'a';   //字符常量
              "abcdef"; //字符串常量
        // 2、const修饰的常变量
               const int num = 10;  //由 const 修饰后，num 就是常变量 - 具有常属性（不能被改变的属性）
               // num = 20  由 const 修饰后，num 不可改变，该句报错。
               printf("num = %d", num);
        // 3、#define 定义的标识符常量
                //#define Max 100
        // 4、枚举常量
              //可以一一列举的常量
               enum Sex   // enum 是枚举关键字  Sex 是自定义名称
               {
                   Male,
                   Female,
                   Secret,  //这三个量即为 这种枚举类型的变量的未来可能取值
               };
                // printf 结果0 ；1 ；2  
     return 0;
     }



//字符串
//  就是一串字符 - 用双引号括起来的一段字符
  int main()
  {
      "abcdef"; //字符串  其最后隐藏了一个 \0 的转义字符

       char arr[] = "hello";// arr[]是字符数组 - 数组是一组相同类型的元素
       // F10 调用调试后对 arr 进行监视 可观察 arr 大小

       char arr1[] = "abc";  // printf 结果 abc
       char arr2[] = { 'a' , 'b' , 'c' };  // printf 结果 abc???????(乱码）， 可在 'c' 后加 '\0' ，便只打印 abc
       printf("%s\n", arr2);

       //求字符串长度
       int len = strlen("abc");  //要先引用头文件 #include(string.h)    printf 结果是3  即表明在计算字符串长度时是不计算 \ 0 的转义字符的
       //  也可有
       printf("%d\n", serlen(arr1));  //结果 3
       printf("%d\n", serlen(arr2));  //结果 随机数 ， 同上理无 \0

       return 0;
  }



  //转义字符
  //  即为转变了原来的字符
  int main()
  {
      printf("%c\n", ' \' ' );  // 转义字符 \' 表示 '   // %c 表示打印字符
      printf("%s\n",  " \" " );  //转义字符  \" 同理
      printf("C:tsst\\test\\test");  //转义字符 \t 为水平制表符（相当于Tab键）\\t 即表示反斜杠 防止其被转译为转义字符 printf结果为正常的\test
      printf("%c\n", '\130');  // \130 即 \ddd  句意 八进制\ddd(130)转为十进制数(88)并printf出字符  //printf 结果为 X   //因为 X 在 ASCII 码值为88
      printf("%c\n", '\x30');  // \x30 即 \xdd  句意 十六进制\xdd(30)转为十进制数(48)并printf出字符   //printf 结果为 0   //因为 0 在 ASCII 码值为48

      return 0;
}