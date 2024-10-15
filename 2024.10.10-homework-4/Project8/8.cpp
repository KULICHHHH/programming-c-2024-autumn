#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int m = 0;
	scanf_s("%d", &m);

	for (int x = 0; x < m; ++x) {
		int i = 0;
		int j = 0;

		scanf_s("%d", &i);
		scanf_s("%d", &j);

		for (int y = i - 1; y < j; ++y) {
			printf("%d ", a[y]);
		}
		printf("\n");
	}
	return 0;
}