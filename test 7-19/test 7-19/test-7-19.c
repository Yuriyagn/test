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







////函数的链式调用
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
//		printf("找不到\n");
//	else
//		printf("找到了,下标是%d", c);
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











//猜数字游戏
void game()
{
	int ret = 0;
	int b = rand();
	printf("请输入一个数字\n");

	while (1)
	{
		scanf("%d", &ret);
		if (ret < b)
			printf("猜小了\n");
		else if (ret > b)
			printf("猜大了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}

void meanu()
{
	printf("****************************************\n");
	printf("******* 1.play       0.exit     ********\n");
	printf("****************************************\n");
	printf("请问你是否开始游戏\n");
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
			printf("退出游戏");
			break;
		default:
			printf("请输入正确的数字\n");
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
//		printf("请输入密码:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "yurui1253398931") == 0)
//		{
//			printf("恭喜！登陆成功");
//			break;
//		}
//		else if (i == 0)
//		{
//			printf("密码错误，还有两次机会\n");
//		}
//		else if (i == 1)
//		{
//			printf("密码错误，还有一次机会\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次机会全部错误，退出程序");
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
//	printf("你的电脑将在1分钟内关机，请输入‘我是猪’取消关机\n请输入>;");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
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
//		printf("请猜一个数字>;\n");
//		scanf("%d", &output);
//		if (output > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (output < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n\n\n");
//			break;
//		}
//	}
//}

//
//int main()
//{
//
//	int a = 0;
//	srand((unsigned int)time(NULL));//rand随机值生成器
//	do
//	{
//		meanu();
//		printf("请选择:");
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
//			printf("退出游戏\n");
//			break;
//		
//		default:
//		
//			printf("选择错误,请重新选择\n");
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






//int main()//乘法口诀表
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
//int main()//求9的个数
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
//	printf("个数是%d\n", count);
//
//	return 0;
//}


//int main()//试除法求素数
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

//int main()//公约数
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
//	printf("最大公约数是:>%d", b);
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




//int main()//比大小
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
//		printf("请输入密码:>\n");
//
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else if (i == 0)
//			printf("密码错误，还有两次输入机会");
//		else if(i==1)
//			printf("密码错误，还有一次输入机会");
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
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
//	int right = sz-1;//下标为长度-1
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
//			printf("找到了，下标是:%d", a);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
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
//			printf("找到了，下标是：%d\n", k);
//		else
//			printf("没找到");
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
//	printf("请输入密码:>\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("放弃确认");
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
		printf("星期1");
		break;
	case 2:
		printf("星期2");
		break;
	case 3:
		printf("星期3");
		break;
	case 4:
		printf("星期4");
		break;
	case 5:
		printf("星期5");
		break;
	case 6:
		printf("星期6");
		break;
	case 7:
		printf("星期天");
		break;
	default:
		printf("输入错误");
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
//		printf("未成年\n");
//	else
//	{
//	if (age >= 18 && age < 28)
//	printf("青年\n");
//	else if (age >= 28 && age < 50)
//	printf("壮年\n");
//	else if (age >= 50 && age < 90)
//	printf("老年\n");
//	else
//	printf("人瑞\n");
//	}
//	return 0;
//}









//struct book
//{
//	char name[20];//书名：C语言程序设计
//	char prince;//55
//};
//
//
//
//int main()
//
//{
//	struct book b1 = { "C语言程序设计",55 };
//	printf("书名 : %s\n", b1.name);
//	printf("价格 : %d", b1.prince);
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