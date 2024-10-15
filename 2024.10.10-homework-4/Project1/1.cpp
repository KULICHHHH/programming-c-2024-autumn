#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	int a[1000] = { 0 };
	int x = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &x);

	int count = 0;
	for (int j = 0; j < n; ++j) {
		if (a[j] == x) {
			count += 1;
		}
	}

	printf("%d", count);

	return 0;
}