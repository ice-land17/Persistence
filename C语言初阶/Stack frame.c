#define _CRT_SECURE_NO_WARNINGS






int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return  z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);
	printf("%d\n", c);
	return 0;
}