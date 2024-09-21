#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int sum = (n / 100) % 10 + (n / 10) % 10 + n % 10;

	printf("%d", sum);

	return EXIT_SUCCESS;
}