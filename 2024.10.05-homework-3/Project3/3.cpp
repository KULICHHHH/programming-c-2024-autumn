#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);

    int bus = 437;
    int bridge = 0;

    for (int i = 0; i < n; ++i) {
        scanf_s("%d", &bridge);
        if (bridge <= bus) {
            printf("Crash %d\n", i + 1); 

            return 0;
        }
    }

    printf("No crash\n");

    return 0;
}