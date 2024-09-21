#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	printf("The next number for the number " );
	printf("%d", n);
	printf(" is ");
	printf("%d", n + 1);
	printf(".\n");

	printf("The previous number for the number ");
	printf("%d", n);
	printf(" is ");
	printf("%d", n - 1);
	printf(".");


	return EXIT_SUCCESS;
}