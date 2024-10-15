#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = {0};
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int l = 0;
	int r = 0;
	scanf_s("%d %d", &l, &r);

	int inx = l;
	for (int j = l + 1; j <= r; ++j) {
		if (a[j] > a[inx]) {
			inx = j;
		}
	}
	printf("%d %d", a[inx], inx);

	return 0;
}