#include<cstdio>
#include <math.h>

int main(int argc, char* argv[]) {
	int a[1000] = { 0 };

	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	int result = a[0];
	for (int i = 0; i < n; ++i) {
		if (abs(a[i] - x) < abs(result - x) || abs(a[i] - x) == abs(result - x) && a[i] < result) {
			result = a[i];
		}
	}
	printf("%d", result);

	return 0;
}