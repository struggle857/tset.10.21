#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
//int main()
//{
	//printf("hello\n");
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(long));

	//return 0;
//}
//int main()
//{
	//计算2个数的和
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//输入数据-使用输入函数
	//scanf("%d%d", &num1, &num2);//取地址符号&
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

	//const修饰的常变量
	//const int num = 10;
	//printf("%d/n",num );
	//num = 8;
	//printf("%d/n", num);
	// C2166.cpp
	 //const-常属性


        //枚举常量
        //枚举--列举
      
//enum Sex



//{
//	MALE,
//	FEMALE,
//	SECRET,

	//#define MAX 10
	//define定义的标识符常量



//};
//int main()
//{
//	printf("%d/n", MALE);
//	printf("%d/n", FEMALE);
//	printf("%d/n", SECRET);
//	return 0;
//
//}
//int main()
//{
	//char arr1[] = "abc";
	//char arr2[]= { 'a', 'b', 'c',0 };\0字符串结束标志
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	 //数字在计算机存储的时候，存储的是2进制
	//return 0;
	//ASCII表、\0-0,
	//strlen-string length-计算字符的长度     从而可以打印出printf("%d\n",strlen(arr1));




//}
/*不能接受嵌套
int main()
{//转义字符
	printf("c:\test\32\test.c");水平制表符-\t
	printf("(are you ok \? \?)\n");
	printf("(are you ok \\t)\n");如果要强打那么就要加\这样才不会被转义
	printf("%d\n",strlen("c:\test\32\test.c"));


	
	return 0;
int main ()*/

//选择语句
/*int main()
{
	int input = 0;
	printf("加入赣南科技学院\n");
	printf("你要好好学习吗\?(1\0)>: ");
	scanf("%d", &input);
	if (input == 1)
	  printf("好offer\n");
	else
	  printf("回家种田\n");
	return 0;

}*/

//循环语句while循环
//int main()
//{
//	int line = 0;
//	printf("加入赣南科技学院\n");
//
//	while (line < 10000)
//	{
//		printf("敲一行代码:%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("一份好offer\n");
//	return 0;
//
//} 

//函数Add(intx,inty)
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//自定义函数  库函数

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	    int a = 5 % 2;
//		printf("%d\n", a);取模
//		return 0;


//int main()
//{
//	//移（2进制）位操作符
//	//<<左移操作符
//	//>>右移操作符
//	int a = 1;
//	int b = a << 2;
//	//b = a + 1;
//	printf("%d/n", b);
//	printf("%d/n", a);
//}
//二进制：1 1 1 1  =1*2^3

/*int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	printf("%d\n",c);
	return 0;
	//&按位与   相同1不同为0相同为1
	//^按位异或    有相同就行
	//|按位或   有1 则为1否则为0

}*/


//=赋值 ==判断相等
//c语言我们判断真假0-假  非0-真

//int main ()
//{
//
//	//int a = 10;
//	//sizeof计算的变量/类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//注意int得用（）
//	return 0;
//}



//分支语句和循环语句
//c语言是一门结构化的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构

//if语句1
//else  if语句2
//else语句3

//int main()

	/*int age = 9;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	
	else
	{
		if (age > 18 && age <= 28)
			printf("青年\n");

	else if (age >= 28 && age < 50)
	printf("壮年\n");
	else if (age >= 50 && age < 100)
	printf("老年\n");
	else
	printf("老不死\n");
	}*/
	
	//else 
	//	printf("成年\n");
	///*	if ("age<18");
	//	printf(" 未成年\n");*/


	/*int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	//else与最近的未匹配的if匹配    也可以直接给大括号从而直接确定匹配
	/*int num = 4;
	if (num == 5)
	{return (1);  }

	
*/

//=赋值 ==判断相等
	//作业列出所有的奇数且在100以下

	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}*/
	
	
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}
	return 0;*/



//int main()
//{
     /*int day =0;
	 scanf("%d",&day);
	 if(1 == day)
	     printf("星期1\n");
    if(2 == day)
	     printf("星期2\n");
    if(3 == day)
	     printf("星期3\n");
	if(4 == day)
	     printf("星期4\n");
	if(5 == day)
		 printf("星期5\n");
    if(6 == day)
	     printf("星期6\n");
    if(7 == day)
	     printf("星期7\n");
		 return 0;*/
	//由于这样太麻烦所以改用switch语句
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}*/
	//switch 无整形语句、搭配break才是完美的整形语句

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			printf("工作日\n");
				break;
			case 6:
			case 7:
			printf("休息日\n");
				break;
				
	}*/
	
		   //case 7:
		   //printf("休息日\n");
			 //  break;int day = 0;
	//int m = 1;
   //scanf("%d", &day);
   //switch (day)
   //{
   //case 1:
	 //  if (m == 1)
		//   printf("hehe\n");
		//   case 2:
		//   case 3:
		 //  case 4:
		 //  case 5:
		 //  printf("工作日\n");
			//   break;
		 //  case 6:
		  // default:
		//	 printf("输入错误\n");
		//	 break;
   //}


	
	
	
	
//	return 0;

//循环语句
//while 循环语句
	/*int i = 1;

	while(i<=10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	return 0;*/
 



//分支循环语句（2）
	/*int ch = getchar();

	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
	/*int ch = 0;
	while ((ch=getchar() !=EOF)
   {
		putchar(ch);

	}



	return 0;*/ 
	//EOF - end  of file 文件结束标志*（空文件）
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0}; 
	//printf("请输入密码:>");
	//scanf("%s", password);//输入密码，并存放在password中
	////缓冲区还剩余一个"\n"
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}

	//printf("请确认(Y/N):>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");

	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}
	//	
	//	return 0;
	//	//输入函数password,scanf输入缓冲区123456\n
 
//int main ()
//{int ch = 0;
//while ((ch = getchar()) != EOF)
//{
//	if (ch < '0' || ch>'9')
//		continue;
//	putchar(ch);
//
//
//}
//return 0;
//	}

//For循环
// int初始化 while调整    i++调整   （ 表达1 表达2  表达3 ）

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}


//复习内容



//int main()
//{
//	int i = 0;
//    for (i = 0; i < 10; i++)
//{   
//		if (i == 5)
//		printf("hehe\n");
//		//printf("haha\n");
//
//	}
//	return 0;
//}

//for语句 的循环的控制变量的取值采用"前闭后开区间"写法

//int main()变种1
//{
//	for (;;);陷入循环for语句
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	{
//		for (i = 0; i < 10; i++)
//		{
//			for (j = 0; j < 10; j++)
//				printf("hehe\n");
//		}
//	}
//	return 0;
//}从而能够达到一百个呵呵若将i=0去除那么将只能得到10个呵呵因为j达到了自己的独立性
 
//变种2
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;  i++, k++)k被赋值被陷入死循环结果为非0则陷入死循环
//		k++;
//		return 0;
//}

//do-while循环
//int main()
//{
//	int i = 1;
//	do {
//		
//		
//		printf("%d", i);
//		i++
//
//	} while (i <= 10);
//		return 0;
//}
// 
// 
// 
// 练习1.
//int main()
//{ 
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}用for语句求n的阶乘


//练习2.
//int main()
//{
//  int y= 0 ;	
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &y);
//	for(n=1;n<=y;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("sum= %d\n", sum);
//		return 0;
//}用for语句求n的阶乘的总和


//练习3.折半查找算法，二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数由于为int所以它sizeof只需要减1
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("没有找到\n");
//		}
//	}
//	return 0;
//}


//练习4.
//int main()
//{
//	char arr1[] = "welcome to china!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//不能减1因为这是char a b c为四字符4-2=2， 0 1 2而你需要2
//	int right = strlen(arr1) - 1;//为另一种写法
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s/n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空函数
//		left++;
//		right--;
//	}
//	return 0;
//}



//练习5.
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "阮某是帅b") == 0)//strcmp用来比较两个字符串相等而==不能
//		{
//			printf("登入成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//
//		}
//	}
//		if (i == 3)
//			printf("三次密码均错误，退出程序\n");
//		return 0;
//	}


//将最大值进行排列，需要使用临时变量
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b ,&c);//213需要用空格隔开，不开空格会默认成一个数
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//		return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//
//	}
//	return 0;
//
//}



//求最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int ret = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n==0)
//	{
//		ret = m % n;
//		m = n;
//		n = ret;
//
//
//	}
//	printf("%d\n", n);
//	return 0;
//
//}

//打印闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		//判断润年的两个标准
//		//能够被4整除&&（并且）不能被100整除
//		//2.能够被400整除
//		if (year%4 == 0 && year%100!= 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year%400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	
//	}
//	printf("\ncount=%3d\n   ", count);
//		return 0;
//}


//方法2
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year%4==0&&year%100!=0))||(year%400==0))
//		{
//			printf("%d\n", year);
//			count++;
//		};
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//打印素数方法1.

	//int count = 0;

	//for (i = 100; i <= 200; i++)
	//{
	//	//判断i是否为素数
	//	//素数的判断规则
	//	//1.试除法
	//   //2->i-1
	//	int j = 0;

	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;

	//		}

	//	}
	//	if (i == j)
	//	{
	//		printf("%d\n", i);
	//		count++;

	//	}
	//	printf("\ncount=%d\n");
	//	
	//}
	//return 0;


//方法2.a和b至少有一个<=i开平方的数
//#include<math.h>
//	int main()
//	{
//		int i = 0;
//		int count = 0;
//
//		for (i = 100; i <= 200; i++)
//		{
//			//判断i是否为素数
//			//素数的判断规则
//			//1.试除法
//		   //2->i-1
//			int j = 0;
//
//			for (j = 2; j <= sqrt(i); j++)//sqrt是库函数开平方
//			{
//				if (i % j == 0)
//				{
//					break;
//
//				}
//
//			}
//			if (j>sqrt(i))
//			{
//				count++;
//				printf("%d\n", i);
//				
//
//			}
//			printf("\ncount=%d\n",count);
//
//		}
//		return 0;
//
//	}


//辗转相除法cotinue跳过下一次的步骤
//计算出现多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		count++;
//		if (i / 10 == 9)
//		count++;
//
//	}
//	printf("count=%d\n",count);
//	return 0;
//}



//分数求和
//1/1-1/2+1/3....
//int main()
//{
//	int i = 0;
//    double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//
//
//
//	return 0;
//}


//乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//打印9行
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//
//	}
//		printf("\n");//关键步骤换行
//		}
//		
//
//	return 0;
//
//}
//！！！重新写上述练习


//猜数字游戏
//1.电脑会生成一个随机的数字
//2.猜数字
#include <stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****   1.paly   0.exit ****\n");
//	printf("***************************\n");
//
//}
//
//
//void game()
//{
//	//1.生成一个随机数字
//	int ret = 0;
//	int guess = 0;
//	
//	//所需要运用的一个能够随机变化的数字
//	 ret = rand()%100+1;
//	 //printf("%d\n", ret);
//	 //2.猜数字
//	 while (1)
//	 {
//		 printf("请猜一个数字\n");
//		 scanf("%d", &guess);
//		 if (guess > ret) {
//			 printf("猜大了\n");
//
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("猜小了\n");
//
//		 }
//		 else
//		 {
//			 printf("恭喜你，猜对了\n");
//			 break;
//		 }
//	 }
//
//}
//
//
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//设置一次游戏就行NULL用于指针和对象跟0很像但是0只是用于数值
//	do
//	{
//		menu();
//		printf("请选择>:");
//		
//		scanf("%d", &input);//&符号意思是指这个值要取在这个地方
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏从而实现game函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//			
//		}
//	} while (input);//do-while循环是至少循环一次为达到目的或者结束
//
//
//	return 0;
//}




//goto  语句例子能够60s关闭cmd
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	//shotdown -s -t 60
//	//system()-执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟后关机请输入我是猪取消关机\n请输入");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//----比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
















//函数

//int Add(int x, int y)//由于没有add这个函数所以需自己制造此函数
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//
//
//}
//
//
//
//
//int  main()
//{
//	int a = 2;
//	int b = 3;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);//返回到目的地  来源后有\0直接结束   源头数据没有目的地那么长
//	printf("%s\n", arr2);
//	return 0;
//
//}
//strcpy-string copy-字符串拷贝
//strlen-string length-字符串的长度有关
//memset  viod*指针 
//memory-内存set-设置
//cplusplus查找
//c 语言的官方资料cppreference

//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//
//}



//自定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//函数的使用
//	
//	int max=get_max(a, b);
//	printf("max=%d\n",max);
//		return 0;
//
//
//}


//写一个函数交换整形的内容
//void swap(int x, int y)//无返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	swap(a, b);
//	//a = b;
//	//tmp = a;
//	//b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//
//}不能完成我们所需要的任务
//int *pa=a;pa为指针变量。、*pa=20为解引用操作    
//&取地址符号

//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//
//}
//当实参传给形参时，形参其实是实参的拷贝，对形参的修改是不影响实参的



//判断是否为素数，是素数为1不是则为2.
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j<n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//
//	}
//	return 1;//return 1;放在外面由于要经过循环所以j++
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i)==1)
//			printf("%d\n", i);
//	}
//		return 0;
//}



//写一个函数判断为闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	
//		return 1;
//	else
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%5d", year);
//		}
//		
//	}
//	return 0;
//}


//实现有序二分查找
//int binary_search(int arr[],int k,int sz)//本质上arr是一个指针
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)//一定要等于
//	{
//		int mid = (right + left) / 2;//这句话不能放外面，放外面只循环一次
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//	        right = mid - 1;
//
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标，找不到返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//写一个函数，每一次使用这个函数num都会加1.
//void ADD(int* p)
//{
//	(*p)++;
//}
//
//
//
//
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}



//函数的嵌套调用和链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));printf打印其字符的个数
//	return 0;
//}
//函数的声明
//在视图中的解决方案中在源文件中***.c,在头文件中***.h
//1.函数声明放在头文件.h中      2.函数的定义放在.c
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}



//函数的递归
/*int main()
{
	printf("hehe\n");
	main();
		return 0;;
}*///stack overflow栈溢出
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d",n % 10);
//}
//
//
//
//int main()
//{
//	unsigned int num = 0;//如果你定义了unsigned只能取正值不能取负值
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}

 
//求字符号长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "haha";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//2.只能使用已有变量
//int my_strlen(char* str)
//{
//	if (*str!='\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	    return 0;
//}
//
//
//int main()
//{
//	char arr[] = "haha";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int y = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &y);
//	for(n=1;n<=y;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("sum= %d\n", sum);
//		return 0;
//}


//迭代 求n的阶乘
//int Fac1(int n)
//{
//
//	int i = 0;
//	int ret = 1;
//
//	for (i=1;i<=n;i++)
//	{
//		ret = i*ret ;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return n = 1;
//
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//
//}Fac2所运用的是递归


//斐波那契（Fib）数列：前两个数之和等于第三个数
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}效率不高1 1 2 3 5 8
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{    
//	int n = 0;
//	int ret = 0; 
//	scanf("%d", &n);
//	ret = Fib(n);
//    printf("ret=%d\n", ret);
//	return 0;
//}


//汉诺塔问题
//青蛙跳台阶



//数组的创建
//int main()
//{
	//创建一个数组-存放整形-10个
	//int arr2[10] = { 1,2,3 };//不完全初始化，剩下元素默认初始化为0
	//char arr1[5];//strlen求字符串的长度-‘、0’之前的字符个数
	//1.strlen和sizeof没有什么关联
	//2.strlen是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
	//3.sizeof计算变量,数组.类型的大小-单位只能是字节
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));由于不确定\0在其”abc“的位置，所以是随机值
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));*/
	

	/*int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]);%p打印地址符号
	}
	//一维数组是连续存放的
	return 0;
}*/


//int main()
//{
//	//二维数组
//	int arr[3][4] = { { 1,2,3}, { 4,5 }
//	};//第一个为行第二个为列；
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("*arr[%d][%d]=%p%p\n",i,j, &arr[i][j]);//行由i决定j由列决定
//		}
//		printf("\n");
//	}//二维数组也是连续存放的
//	return 0;
//}
 


//设计一个冒泡函数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// int flag = 1;第一趟检测是否有序
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//              int flag = 0;
//			}
// if(flag==1)
// {
// break;//break只能用于循环和switch语句中这个break用于for
// }
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//对arr进行冒泡排序，排成升序
//	int  sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//		return 0;
//
//}


//1.sizeof（数组名），计算整个数组的大小sizeof内部放一个数组名，数组名表示整个数组sizeof（arr）
//2.&数组名，取出的是数组的地址。&数组名，数组名表示整个数组。
//除（1）（2）两种情况之外，所有的数组名都表示数组首元素的地址。













	



































































































































 








