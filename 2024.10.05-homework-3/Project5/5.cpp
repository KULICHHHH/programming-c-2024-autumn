#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf_s("%d", &b);
            a += b;
        }
    }

    printf("%d", a / 2);

    return 0;
}