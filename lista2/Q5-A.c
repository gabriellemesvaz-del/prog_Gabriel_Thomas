#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;

    return mdc(b, a % b);
}

int main() {
    int a = 48;
    int b = 18;

    printf("MDC = %d\n", mdc(a, b));

    return 0;
}
