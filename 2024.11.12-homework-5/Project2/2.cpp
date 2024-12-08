#include<iostream>

int main(int argc, char* argv[]) {

	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(n));

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	int k = 0;
	std::cin >> k;
	if (k > 0) {
		k %= n;
	}
	else {
		k = n - ((-k) % n);
	}

	for (int i = n - k; i < n; i++) {
		std::cout << *(a + i) << ' ';
	}
	for (int i = 0; i < n - k; i++) {
		std::cout << *(a + i) << ' ';
	}

	free(a);

	return 0;
}