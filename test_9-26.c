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
	//����2�����ĺ�
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//��������-ʹ�����뺯��
	//scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

	//const���εĳ�����
	//const int num = 10;
	//printf("%d/n",num );
	//num = 8;
	//printf("%d/n", num);
	// C2166.cpp
	 //const-������


        //ö�ٳ���
        //ö��--�о�
      
//enum Sex



//{
//	MALE,
//	FEMALE,
//	SECRET,

	//#define MAX 10
	//define����ı�ʶ������



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
	//char arr2[]= { 'a', 'b', 'c',0 };\0�ַ���������־
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	 //�����ڼ�����洢��ʱ�򣬴洢����2����
	//return 0;
	//ASCII��\0-0,
	//strlen-string length-�����ַ��ĳ���     �Ӷ����Դ�ӡ��printf("%d\n",strlen(arr1));




//}
/*���ܽ���Ƕ��
int main()
{//ת���ַ�
	printf("c:\test\32\test.c");ˮƽ�Ʊ��-\t
	printf("(are you ok \? \?)\n");
	printf("(are you ok \\t)\n");���Ҫǿ����ô��Ҫ��\�����Ų��ᱻת��
	printf("%d\n",strlen("c:\test\32\test.c"));


	
	return 0;
int main ()*/

//ѡ�����
/*int main()
{
	int input = 0;
	printf("������ϿƼ�ѧԺ\n");
	printf("��Ҫ�ú�ѧϰ��\?(1\0)>: ");
	scanf("%d", &input);
	if (input == 1)
	  printf("��offer\n");
	else
	  printf("�ؼ�����\n");
	return 0;

}*/

//ѭ�����whileѭ��
//int main()
//{
//	int line = 0;
//	printf("������ϿƼ�ѧԺ\n");
//
//	while (line < 10000)
//	{
//		printf("��һ�д���:%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("һ�ݺ�offer\n");
//	return 0;
//
//} 

//����Add(intx,inty)
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//�Զ��庯��  �⺯��

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
//		printf("%d\n", a);ȡģ
//		return 0;


//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<���Ʋ�����
//	//>>���Ʋ�����
//	int a = 1;
//	int b = a << 2;
//	//b = a + 1;
//	printf("%d/n", b);
//	printf("%d/n", a);
//}
//�����ƣ�1 1 1 1  =1*2^3

/*int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	printf("%d\n",c);
	return 0;
	//&��λ��   ��ͬ1��ͬΪ0��ͬΪ1
	//^��λ���    ����ͬ����
	//|��λ��   ��1 ��Ϊ1����Ϊ0

}*/


//=��ֵ ==�ж����
//c���������ж����0-��  ��0-��

//int main ()
//{
//
//	//int a = 10;
//	//sizeof����ı���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//ע��int���ã���
//	return 0;
//}



//��֧����ѭ�����
//c������һ�Žṹ���ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ

//if���1
//else  if���2
//else���3

//int main()

	/*int age = 9;
	if (age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	
	else
	{
		if (age > 18 && age <= 28)
			printf("����\n");

	else if (age >= 28 && age < 50)
	printf("׳��\n");
	else if (age >= 50 && age < 100)
	printf("����\n");
	else
	printf("�ϲ���\n");
	}*/
	
	//else 
	//	printf("����\n");
	///*	if ("age<18");
	//	printf(" δ����\n");*/


	/*int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	//else�������δƥ���ifƥ��    Ҳ����ֱ�Ӹ������ŴӶ�ֱ��ȷ��ƥ��
	/*int num = 4;
	if (num == 5)
	{return (1);  }

	
*/

//=��ֵ ==�ж����
	//��ҵ�г����е���������100����

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
	     printf("����1\n");
    if(2 == day)
	     printf("����2\n");
    if(3 == day)
	     printf("����3\n");
	if(4 == day)
	     printf("����4\n");
	if(5 == day)
		 printf("����5\n");
    if(6 == day)
	     printf("����6\n");
    if(7 == day)
	     printf("����7\n");
		 return 0;*/
	//��������̫�鷳���Ը���switch���
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;
	}*/
	//switch ��������䡢����break�����������������

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			printf("������\n");
				break;
			case 6:
			case 7:
			printf("��Ϣ��\n");
				break;
				
	}*/
	
		   //case 7:
		   //printf("��Ϣ��\n");
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
		 //  printf("������\n");
			//   break;
		 //  case 6:
		  // default:
		//	 printf("�������\n");
		//	 break;
   //}


	
	
	
	
//	return 0;

//ѭ�����
//while ѭ�����
	/*int i = 1;

	while(i<=10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	return 0;*/
 



//��֧ѭ����䣨2��
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
	//EOF - end  of file �ļ�������־*�����ļ���
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0}; 
	//printf("����������:>");
	//scanf("%s", password);//�������룬�������password��
	////��������ʣ��һ��"\n"
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}

	//printf("��ȷ��(Y/N):>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");

	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}
	//	
	//	return 0;
	//	//���뺯��password,scanf���뻺����123456\n
 
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

//Forѭ��
// int��ʼ�� while����    i++����   �� ���1 ���2  ���3 ��

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


//��ϰ����



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

//for��� ��ѭ���Ŀ��Ʊ�����ȡֵ����"ǰ�պ�����"д��

//int main()����1
//{
//	for (;;);����ѭ��for���
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
//}�Ӷ��ܹ��ﵽһ�ٸ��Ǻ�����i=0ȥ����ô��ֻ�ܵõ�10���Ǻ���Ϊj�ﵽ���Լ��Ķ�����
 
//����2
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;  i++, k++)k����ֵ��������ѭ�����Ϊ��0��������ѭ��
//		k++;
//		return 0;
//}

//do-whileѭ��
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
// ��ϰ1.
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
//}��for�����n�Ľ׳�


//��ϰ2.
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
//}��for�����n�Ľ׳˵��ܺ�


//��ϰ3.�۰�����㷨�����ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ�������Ϊint������sizeofֻ��Ҫ��1
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("û���ҵ�\n");
//		}
//	}
//	return 0;
//}


//��ϰ4.
//int main()
//{
//	char arr1[] = "welcome to china!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//���ܼ�1��Ϊ����char a b cΪ���ַ�4-2=2�� 0 1 2������Ҫ2
//	int right = strlen(arr1) - 1;//Ϊ��һ��д��
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s/n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-��պ���
//		left++;
//		right--;
//	}
//	return 0;
//}



//��ϰ5.
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "��ĳ��˧b") == 0)//strcmp�����Ƚ������ַ�����ȶ�==����
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//
//		}
//	}
//		if (i == 3)
//			printf("��������������˳�����\n");
//		return 0;
//	}


//�����ֵ�������У���Ҫʹ����ʱ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b ,&c);//213��Ҫ�ÿո�����������ո��Ĭ�ϳ�һ����
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



//�����Լ��
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

//��ӡ����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		//�ж������������׼
//		//�ܹ���4����&&�����ң����ܱ�100����
//		//2.�ܹ���400����
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


//����2
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



//��ӡ��������1.

	//int count = 0;

	//for (i = 100; i <= 200; i++)
	//{
	//	//�ж�i�Ƿ�Ϊ����
	//	//�������жϹ���
	//	//1.�Գ���
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


//����2.a��b������һ��<=i��ƽ������
//#include<math.h>
//	int main()
//	{
//		int i = 0;
//		int count = 0;
//
//		for (i = 100; i <= 200; i++)
//		{
//			//�ж�i�Ƿ�Ϊ����
//			//�������жϹ���
//			//1.�Գ���
//		   //2->i-1
//			int j = 0;
//
//			for (j = 2; j <= sqrt(i); j++)//sqrt�ǿ⺯����ƽ��
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


//շת�����cotinue������һ�εĲ���
//������ֶ��ٸ�9
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



//�������
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


//��10�������е����ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
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


//�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//��ӡ9��
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//
//	}
//		printf("\n");//�ؼ����軻��
//		}
//		
//
//	return 0;
//
//}
//����������д������ϰ


//��������Ϸ
//1.���Ի�����һ�����������
//2.������
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
//	//1.����һ���������
//	int ret = 0;
//	int guess = 0;
//	
//	//����Ҫ���õ�һ���ܹ�����仯������
//	 ret = rand()%100+1;
//	 //printf("%d\n", ret);
//	 //2.������
//	 while (1)
//	 {
//		 printf("���һ������\n");
//		 scanf("%d", &guess);
//		 if (guess > ret) {
//			 printf("�´���\n");
//
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("��С��\n");
//
//		 }
//		 else
//		 {
//			 printf("��ϲ�㣬�¶���\n");
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
//	srand((unsigned int)time(NULL));//����һ����Ϸ����NULL����ָ��Ͷ����0������0ֻ��������ֵ
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		
//		scanf("%d", &input);//&������˼��ָ���ֵҪȡ������ط�
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ�Ӷ�ʵ��game����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//			
//		}
//	} while (input);//do-whileѭ��������ѭ��һ��Ϊ�ﵽĿ�Ļ��߽���
//
//
//	return 0;
//}




//goto  ��������ܹ�60s�ر�cmd
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	//shotdown -s -t 60
//	//system()-ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ�������������ȡ���ػ�\n������");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//----�Ƚ������ַ���-strcmp()
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
















//����

//int Add(int x, int y)//����û��add��������������Լ�����˺���
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
//	strcpy(arr2, arr1);//���ص�Ŀ�ĵ�  ��Դ����\0ֱ�ӽ���   Դͷ����û��Ŀ�ĵ���ô��
//	printf("%s\n", arr2);
//	return 0;
//
//}
//strcpy-string copy-�ַ�������
//strlen-string length-�ַ����ĳ����й�
//memset  viod*ָ�� 
//memory-�ڴ�set-����
//cplusplus����
//c ���ԵĹٷ�����cppreference

//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//
//}



//�Զ��庯��
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
//	//������ʹ��
//	
//	int max=get_max(a, b);
//	printf("max=%d\n",max);
//		return 0;
//
//
//}


//дһ�������������ε�����
//void swap(int x, int y)//�޷���ֵ
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
//}���������������Ҫ������
//int *pa=a;paΪָ���������*pa=20Ϊ�����ò���    
//&ȡ��ַ����

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
//��ʵ�δ����β�ʱ���β���ʵ��ʵ�εĿ��������βε��޸��ǲ�Ӱ��ʵ�ε�



//�ж��Ƿ�Ϊ������������Ϊ1������Ϊ2.
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j<n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//
//	}
//	return 1;//return 1;������������Ҫ����ѭ������j++
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



//дһ�������ж�Ϊ����
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


//ʵ��������ֲ���
//int binary_search(int arr[],int k,int sz)//������arr��һ��ָ��
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)//һ��Ҫ����
//	{
//		int mid = (right + left) / 2;//��仰���ܷ����棬������ֻѭ��һ��
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
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±꣬�Ҳ�������-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//дһ��������ÿһ��ʹ���������num�����1.
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



//������Ƕ�׵��ú���ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));printf��ӡ���ַ��ĸ���
//	return 0;
//}
//����������
//����ͼ�еĽ����������Դ�ļ���***.c,��ͷ�ļ���***.h
//1.������������ͷ�ļ�.h��      2.�����Ķ������.c
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}



//�����ĵݹ�
/*int main()
{
	printf("hehe\n");
	main();
		return 0;;
}*///stack overflowջ���
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
//	unsigned int num = 0;//����㶨����unsignedֻ��ȡ��ֵ����ȡ��ֵ
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}

 
//���ַ��ų���
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
//2.ֻ��ʹ�����б���
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


//���� ��n�Ľ׳�
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
//}Fac2�����õ��ǵݹ�


//쳲�������Fib�����У�ǰ������֮�͵��ڵ�������
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
//}Ч�ʲ���1 1 2 3 5 8
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


//��ŵ������
//������̨��



//����Ĵ���
//int main()
//{
	//����һ������-�������-10��
	//int arr2[10] = { 1,2,3 };//����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	//char arr1[5];//strlen���ַ����ĳ���-����0��֮ǰ���ַ�����
	//1.strlen��sizeofû��ʲô����
	//2.strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
	//3.sizeof�������,����.���͵Ĵ�С-��λֻ�����ֽ�
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));���ڲ�ȷ��\0���䡱abc����λ�ã����������ֵ
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));*/
	

	/*int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]);%p��ӡ��ַ����
	}
	//һά������������ŵ�
	return 0;
}*/


//int main()
//{
//	//��ά����
//	int arr[3][4] = { { 1,2,3}, { 4,5 }
//	};//��һ��Ϊ�еڶ���Ϊ�У�
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("*arr[%d][%d]=%p%p\n",i,j, &arr[i][j]);//����i����j���о���
//		}
//		printf("\n");
//	}//��ά����Ҳ��������ŵ�
//	return 0;
//}
 


//���һ��ð�ݺ���
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// int flag = 1;��һ�˼���Ƿ�����
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
// break;//breakֻ������ѭ����switch��������break����for
// }
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//��arr����ð�������ų�����
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


//1.sizeof������������������������Ĵ�Сsizeof�ڲ���һ������������������ʾ��������sizeof��arr��
//2.&��������ȡ����������ĵ�ַ��&����������������ʾ�������顣
//����1����2���������֮�⣬���е�����������ʾ������Ԫ�صĵ�ַ��













	



































































































































 








