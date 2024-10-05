#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    int heads = 0; 
    int tails = 0; 

    scanf_s("%d", &n);

    for (int i = 0; i < n; ++i) {
        int coin = 0;
        scanf_s("%d", &coin);

        if (coin == 0) {
            ++heads;
        }
        else {
            ++tails; 
        }
    }

    int min_flips = (heads < tails) ? heads : tails;
    printf("%d\n", min_flips);

    return 0;
}