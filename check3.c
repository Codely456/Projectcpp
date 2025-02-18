#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter values of a,b,c,d:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("Result: %d\n",a - b == c - d);
	return 0;

}
