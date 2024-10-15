#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int v[100] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &v[i]);
	}

	int p[100] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &p[i]);
	}

	int m[100] = { 0 };
	int max = p[0] * v[0];
	int result = 0;

	for (int i = 1; i < n; ++i) {
		m[i] = p[i] * v[i];
		if (m[i] > max) {
			max = m[i];
			result = i;
		}
	}

	printf("%d", result + 1);

	return 0;
}