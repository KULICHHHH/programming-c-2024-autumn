#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);

    int m = 0;
    int count = 0;
    int max = 0;
    
    for (int i = 0; i < n; ++ i) {
        scanf_s("%d", &m);
        if (m > 0) {
            ++count;
        }
        else {
            count = 0;
        }
        if (count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}