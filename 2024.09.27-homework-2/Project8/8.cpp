#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0; 
    int m = 0; 
    scanf_s("%d", &n);
    scanf_s("%d", &m);

    int a = 0;
    int b = 0;
    a = (n + 1) * m + (m + 1) * n + 2 * (n / 2) + 2 * (m / 2) + (n % 2 + m % 2) % 2;
    b = (n + 1) * m + (m + 1) * n + (m - 1) * n + (n - 1) * m;

    if (a > b) {
        printf("%d", b);
    }
    else {
        printf("%d", a);
    }
    return EXIT_SUCCESS;
}