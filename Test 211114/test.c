#define _CRT_SECURE_NO_WARNINGS 1

//����������
// C������������
//  ����Ϊ���ܸı����
//  ����Ϊ�ܸı����

//����һ������
// ���� + ������ = 0;  �Ƽ�
// ���� + ������;      ���Ƽ�

#include <stdio.h>

//int main()
//{
//	int age = 20;
//	double weight = 75.3;  //double���;��Ƚϸ� float���;��Ƚϵ�
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);  //%d ��ӡ����
//	printf("%lf\n", weight);  //%f ���ڴ�ӡfloat  //%lf���ڴ�ӡdouble
//	
//	return 0;
//}


//�����ķ���
//  �ֲ�����
//  ȫ�ֱ���
//
//  ��Ҫ���Ƿ��ڴ�������ͷ

//ȫ�ֱ��� - {}�ⲿ�����
/*int a = 100*/;

//int main()
//{
//	//�ֲ����� - {}�ڲ������
//	int a = 10;
//	printf("%d\n", a);  //��ӡ�����10  //ԭ���ǵ��ֲ�������ȫ�ֱ������ͻʱ �ֲ�����
//	// in fact �������ȫ�ֱ����;ֲ������������ͻ
//	//
//	return 0;
//}


//дһ��������2�������ĺ�
//scanf���������뺯��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);   // scanf������VS��ᱨ��Ҫ����ʹ�þ�Ҫ�� #define _CRT_SECURE_NO_WARNINGS 1 ���ڵ�һ��
	sum = a + b;              //�������� scanf_s ��Ϊ scanf_S ���� ����VS�������ṩ�� ����C���Ա�׼��
	printf("sum = %d\n", sum);

	return 0;
}

