#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = {0};

	int minn = 1000;
	int maxx = 0;

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
		if (minn > a[i]) {
			minn = a[i];
		}
		else if (maxx < a[i]) {
			maxx = a[i];
		}
	}

	for (int j = 0; j < n; ++j) {
		if (a[j] == maxx) {
			a[j] = minn;
		}
	}

	for (int x = 0; x < n; ++x)
	{
		printf("%d ", a[x]);
	}
	printf("\n");

	return 0;
}