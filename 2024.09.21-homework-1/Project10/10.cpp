#include<iostream>

int main(int argc, char* argv[])
{
	int s = 0;
	scanf_s("%d", &s);

	int srg = s / 6;
	int ptr = srg;
	int ktr = (srg + ptr) * 2;

	printf("%d", ptr);
	printf(" ");
	printf("%d", ktr);
	printf(" ");
	printf("%d", srg);

	return EXIT_SUCCESS;
}