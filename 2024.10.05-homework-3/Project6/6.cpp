#include <cstdio>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);

    int c = a;
    int d = b;
    while (d != 0) {
        int temp = d;
        d = c % d;
        c = temp;
    }
    int gcd = c;

    int lcm = (a / gcd) * b;

    printf("%d", lcm);

    return 0;
}