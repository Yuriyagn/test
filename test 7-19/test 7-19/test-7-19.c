#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#include<math.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>
//#include<math.h>
//#include<string.h>

//int main()
//{
//
//
//	return 0;
//}







////��������ʽ����
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	printf("\n%d", 43);
//
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	printf("%d", strlen("abc"));
//	return 0;
//}



//
//void add(int* p)
//{
//	(*p)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	add(&num);	
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//
//	return 0;
//}


//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int b = (left + right) / 2;
//		if (arr[b] > k)
//		{
//			right = b - 1;
//		}
//		else if (arr[b] < k)
//		{
//			left = b + 1;
//		}
//		else
//		{
//			return b;
//		}
//	}
//	if (left > right) 
//	{	
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int c = binary_search(arr,k,sz);
//	if (c == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���,�±���%d", c);
//	return 0;
//}




//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(is_leap_year(year)==1)
//			printf("%d ", year);
//	}
//
//	return 0;
//}
//
//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}



//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0||year%400==0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//int is_prime(int n)
//{
//	int a = 1;
//	for (a = 2; a <= sqrt(n); a++)
//	{
//		if (n%a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\n%d", count);
//
//	return 0;
//}











//��������Ϸ
void game()
{
	int ret = 0;
	int b = rand();
	printf("������һ������\n");

	while (1)
	{
		scanf("%d", &ret);
		if (ret < b)
			printf("��С��\n");
		else if (ret > b)
			printf("�´���\n");
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

void meanu()
{
	printf("****************************************\n");
	printf("******* 1.play       0.exit     ********\n");
	printf("****************************************\n");
	printf("�������Ƿ�ʼ��Ϸ\n");
}

int main()
{
	int a = 0;
	do
	{
		meanu();
		srand((unsigned int)time(NULL));
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("��������ȷ������\n");
		}
	} while (a);
	
	return 0;
}



//int main()
//{
//
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "yurui1253398931") == 0)
//		{
//			printf("��ϲ����½�ɹ�");
//			break;
//		}
//		else if (i == 0)
//		{
//			printf("������󣬻������λ���\n");
//		}
//		else if (i == 1)
//		{
//			printf("������󣬻���һ�λ���\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���λ���ȫ�������˳�����");
//
//	}
//
//
//	return 0;
//}



//
//void Swap(int* x, int* y)
//{
//	int tep = 0;
//	tep = *x;
//	*x = *y;
//	*y = tep;
//}
//
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//
//	Swap(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//	return y;
//	}
//	
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = get_max(a, b);
//	printf("%d", c);
//
//	return 0;
//}
//
//


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//
//
//	return 0;
//}





//int main()
//{
//
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//
//
//	return 0;
//}

















//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ĵ��Խ���1�����ڹػ��������롮������ȡ���ػ�\n������>;");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}











//void meanu()
//{
//	printf("***************************************\n");
//	printf("*****    1. play        2.exit    *****\n");
//	printf("***************************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int output = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("���һ������>;\n");
//		scanf("%d", &output);
//		if (output > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (output < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n\n\n");
//			break;
//		}
//	}
//}

//
//int main()
//{
//
//	int a = 0;
//	srand((unsigned int)time(NULL));//rand���ֵ������
//	do
//	{
//		meanu();
//		printf("��ѡ��:");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//		
//			game();
//			break;
//		
//		case 0:
//		
//			printf("�˳���Ϸ\n");
//			break;
//		
//		default:
//		
//			printf("ѡ�����,������ѡ��\n");
//			break;
//		
//		}
//	} while (a);
//
//
//
//
//	return 0;
//}






//int main()//�˷��ھ���
//{
//	int a = 0;
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (a = 1; a <= i; a++)
//		{
//			int b = i * a;
//			printf("%d*%d=%-2d ", i, a, b);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//
//int arr[] = { 2,32,4,5,6,7,8,9,-1};
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	double sum = 0.0;
//	double i = 0.0;
//	for (i = 1.0; i <= 100; i++)
//	{
//		sum += (1 / i);
//	}
//	printf("%lf\n", sum);
//
//
//	return 0;
//}
//int main()//��9�ĸ���
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("������%d\n", count);
//
//	return 0;
//}


//int main()//�Գ���������
//{
//	
//	int j = 0;
//	int count = 0;
//	for (j=101;j<=200;j+=2)
//	{
//		int i = 0;
//		for (i = 2; i <= sqrt(j); i++)
//		{
//			if (j%i == 0)
//				break;
//		}
//		if (i > sqrt(j))
//		{
//			count++;
//			printf("%d ", j);
//		}
//	}
//	printf("\n%d\n",count);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int main()//��Լ��
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,& b);
//	int c = 0;
//	while (c=a%b)
//	{
//	
//		a = b;
//		b = c;
//	}
//	printf("���Լ����:>%d", b);
//
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}




//int main()//�ȴ�С
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c>b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}








//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for(i = 0; i < 3; i++)
//	{
//		printf("����������:>\n");
//
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else if (i == 0)
//			printf("������󣬻��������������");
//		else if(i==1)
//			printf("������󣬻���һ���������");
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//#include<windows.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to CUG    !!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//  
//		left++;
//		right--;
//
//	}
//
//	return 0;
//}






//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;//�±�Ϊ����-1
//	while(left<=right)
//	{
//		int a = (left + right) / 2;
//		if (arr[a] > k)
//		{
//			right = a - 1;
//
//		}
//		else if (arr[a] < k)
//		{
//			left = a + 1;
//
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d", a);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;


//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	int i = 7;
//	for (k = 0; k < sz; k++)
//		if (i == arr[k])
//			printf("�ҵ��ˣ��±��ǣ�%d\n", k);
//		else
//			printf("û�ҵ�");
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	int n = 1;
//	int answer = 0;
//	int a = 1;
//	int b = 0;
//	for (i = 1; i<=10; i++)
//	{
//		a = a * i;
//		answer = answer + a;



		//for (n=1; n <= i; n++)
		//{
		//	a = a * n;
		//	b = a;

		//}
		/*answer = answer + a;
		a = 1;*/
	///*}
	//*/printf("%d", answer);

	/*return 0;
}*/







//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ",i);
//	}
//
//
//	return 0;
//}
//













//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//
//	return 0;
//}









//getchar

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
//
//
//	return 0;
//}










//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}
//

















//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		i++;
//
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}




	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1");
		break;
	case 2:
		printf("����2");
		break;
	case 3:
		printf("����3");
		break;
	case 4:
		printf("����4");
		break;
	case 5:
		printf("����5");
		break;
	case 6:
		printf("����6");
		break;
	case 7:
		printf("������");
		break;
	default:
		printf("�������");
		break;
	}

	return 0;
}*/








//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		int b = a % 2;
//		if (b == 1)
//			printf("%d ", a);
//		a++;
//	}
//	return 0;
//}







//int main()
//{
//	int age = 35;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//	if (age >= 18 && age < 28)
//	printf("����\n");
//	else if (age >= 28 && age < 50)
//	printf("׳��\n");
//	else if (age >= 50 && age < 90)
//	printf("����\n");
//	else
//	printf("����\n");
//	}
//	return 0;
//}









//struct book
//{
//	char name[20];//������C���Գ������
//	char prince;//55
//};
//
//
//
//int main()
//
//{
//	struct book b1 = { "C���Գ������",55 };
//	printf("���� : %s\n", b1.name);
//	printf("�۸� : %d", b1.prince);
//
//	return 0;
//}




//int main()
//{
//	double j = 3.14159;
//	double* ko = &j;
//	printf("%d\n", sizeof(ko));
//
//	return 0;
//}
//



//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	printf("%p\n", p);
//	printf("%d", sizeof(p));
//	return  0;
//}
//












//
////int main()
//{
//	int n = printf("Hello world!\n");
//	printf("%d", n);
//
//	return 0;
//}
////#include <stdio.h>
////int main ()
////
////{
////int num1 = 0;
////int num2 = 0;
////int num3 = 0;
////short sum = 0;
////scanf("%d%d%d", &num1, &num2, &num3);
////sum = num1 + num2 + num3;
////printf("%d\n", sum);
////return 0;
////}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char arr1[] = " welcome to CUG , happy !!!";
//	char arr2[] = "###########################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		pringf("%s\n", arr2);
//		left++;
//		right--;
//
//	}
//
//	return 0;
//}