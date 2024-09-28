#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int fox = 0;
	int cat = 0;
	scanf_s("%d", &n);

	if (n % 5 == 0) {
		cat = n / 5;
		fox = 0;
	}
	else if (n % 5 == 1 || n % 5 == 4) {
		cat = n / 5 - 1;
		fox = (n - (cat * 5)) / 3;
	}
	else if (n % 5 == 2) {
		cat = n / 5 - 2;
		fox = (n - (cat * 5)) / 3;
	}
	else if (n % 5 == 3) {
		fox = 1;
		cat = n / 5;
	}
	printf("%d\n", cat);
	printf("%d", fox);

	return EXIT_SUCCESS;
}