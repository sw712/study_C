#include <stdio.h>
int fibo(int n)
{
	if(n == 0) 
		return 0;
	else if (n == 1)
		return 1;
	else 
		return fibo(n-2) + fibo(n-1);
}

int main(void)
{
	int n, i;

	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		printf("%d ", fibo(i));
	}
	printf("\n");
}