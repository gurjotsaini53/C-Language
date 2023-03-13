#include<stdio.h>
typedef struct cq1
{
	int x, y;
}cq2;
int main()
{
	struct cq1 var1 = {1, 2};
	printf("%d", var1.x);
	cq2 var2;
	printf("%d", var2.x);
	var2 = var1;
	printf("%d", var2.x);
}