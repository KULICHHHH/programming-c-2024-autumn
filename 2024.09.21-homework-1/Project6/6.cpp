#include<iostream>

int main(int argc, char* argv[])
{
	int g = 0;
	int l = 0;
	scanf_s("%d", &g);
	scanf_s("%d", &l);

	int sum = g + l - 1;

	printf("%d", sum - g);
	printf(" ");
	printf("%d", sum - l);

	return EXIT_SUCCESS;
}