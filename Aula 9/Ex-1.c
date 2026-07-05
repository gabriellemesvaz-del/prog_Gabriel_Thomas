#include <stdio.h>

int maior(int v[], int n) {
  
    if (n == 1) {
        return v[0];
    }

    int maiorResto = maior(v, n - 1);

    if (v[n - 1] > maiorResto) {
        return v[n - 1];
    } else {
        return maiorResto;
    }
}

int main() {
    int v[] = {12, 7, 25, 4, 18, 30, 9};
    int n = 7; 

    printf("Maior elemento: %d\n", maior(v, n));

    return 0;
}
