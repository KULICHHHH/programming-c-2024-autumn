#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
    int k = 0;
    int m = 0; 
    int n = 0; 

    scanf_s("%d", &k);
    scanf_s("%d", &m);
    scanf_s("%d", &n);

    int result = 0;

    if (n <= k) {
        result = 2 * m;
    }
    else if ((n * 2) % k == 0){
        result = (n * 2) / k * m;
    }
    else {
        result = ((n * 2) / k + 1) * m;
    }
    printf("%d", result);

    return EXIT_SUCCESS;
}