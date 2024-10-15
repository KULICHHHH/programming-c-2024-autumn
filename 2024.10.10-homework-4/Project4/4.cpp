#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = { 0 };

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int s = a[0] + a[n - 1] + ((a[1] > a[n - 2]) ? a[1] : a[n - 2]);

	for (int i = 1; i < n - 1; ++i) {
		if (a[i - 1] + a[i] + a[i + 1] > s) {
			s = a[i - 1] + a[i] + a[i + 1];
		}
	}
	
	printf("%d", s);

	return 0;
}