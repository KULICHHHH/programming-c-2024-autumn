#include <cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);

    int max = 0;
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        int v = 0;
        int s = 0;
        scanf_s("%d", &v);
        scanf_s("%d", &s);
        
        if (s == 1 && max < v){
            count = i + 1;
            max = v;
        }
    }
    
    if (max == 0) {
        printf("-1");
    }
    else {
        printf("%d", count);
    }

    return 0;
}