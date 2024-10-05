#include <cstdio>

int main(int argc, char* argv[]){
    int i = 0;
    int j = 0;
    int f0 = 0;
    int f1 = 1;
    
    scanf_s("%d", &i);
    scanf_s("%d", &j);

    int m = i;
    int n = j;

    while (m && n) {
        if (m < n) {
            n %= m;
        }
        else {
            m %= n;
        }
    }

    int gcd = m + n;

    for (i = gcd; i > 0; --i)
    {
        int f = (f0 + f1) % 1000000000;
        f0 = f1;
        f1 = f;
    }
    printf("%d", f0);

    return 0;
}