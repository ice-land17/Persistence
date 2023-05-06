//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//if语句

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("成年辣\n");
//	else
//		printf("不能上网");
//		return 0;
//}
////C语言中如何表示真假，0表示假，非0表示真
//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 80)
//		printf("壮年\n");
//	else if (age >= 80 && age < 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}


//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}



////判断一个数是否是奇数
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (1 == n % 2)
//	{
//		printf("奇数\n");
//	}
//	return 0;
//}

////输出1到100的奇数,两种方法:
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		printf("%d ", i);
//		i = i + 2;
//	}
//}



//switch语句也是一种分支语句。常常用于多分支的情况。
//方法1用于if语句
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("周一\n");
//	else if (day == 2 )
//		printf("周二\n");
//	else if (day == 3)
//		printf("周三\n");
//	else if (day == 4)
//		printf("周四\n");
//	else if (day == 5)
//		printf("周五\n");
//	else
//		printf("周六\n");
//	return 0;
//}

////switch语句：
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("周一\n");
//		break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周日\n");
//		break;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//			printf("输入错误\n");
//			break;
//	}
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//进入case1，m等3
//	case 2:
//		n++;//进入case2，n等2
//	case 3:
//		switch (n)
//		{//switch允许嵌套
//		case 1:
//			n++;//进入嵌套case1,n=3
//		case 2:
//			m++; n++; //进入嵌套case2, m=3+1=4,n=2+1=3;
//			break;//跳出
//		}
//	case 4:
//		m++;//进入case4，m+1=4+1=5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	//最终跳出打印m=5,n=3;
//	return 0;
//}
