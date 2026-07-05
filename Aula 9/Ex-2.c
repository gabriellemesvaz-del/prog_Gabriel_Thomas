#include <stdio.h>

void inverter(char s[], int ini, int fim) {

  if (ini >= fim) {
        return;
    }


    char temp = s[ini];
    s[ini] = s[fim];
    s[fim] = temp;

    inverter(s, ini + 1, fim - 1);
}

int main() {
    char s[] = "CEEP";

    inverter(s, 0, 3);

    printf("String invertida: %s\n", s);

    return 0;
}
