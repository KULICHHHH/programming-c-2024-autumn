#include <iostream>

int main(int argc, char* argv[])
{
	int a[100] = { 0 };
	int b[100] = { 0 };
	int c[100] = { 0 };
	int d = 0;
	int e = 0;
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++){
		std::cin >> *(a + i);
	}
	for (int i = 0; i < n; i++){
		if (*(a + i) % 2 == 1){
			*(b + i) = *(a + i);
			++e;
		}
		else{
			*(c + i) = *(a + i);
			++d;
		}
	}
	for (int i = 0; i < n; i++){
		if (*(b + i) != 0){
			std::cout << *(b + i) << ' ';
		}
	}
	for (int i = 0; i < n; i++){
		if (*(c + i) != 0){
			std::cout << *(c + i) << ' ';
		}
	}
	if (e > d){
		std::cout << "NO";
	}
	else{
		std::cout << "YES";
	}
	return EXIT_SUCCESS;
}