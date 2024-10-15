#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000] = { 0 };

	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	for (int j = 0; j < n; ++j) {
		printf("%d ", a[n - j - 1]);
	}

	return 0;
}