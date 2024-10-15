#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[100] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	int result = x + 1;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= x) {
			result = i + 2;
		}
		else {
			break;
		}
	}
	printf("%d\n", result);

	return 0;
}