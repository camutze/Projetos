#include <stdio.h>

int main() {
    int N = 10; // Defina N como o número desejado de termos da sequência Fibonacci
    int first = 0, second = 1;

    // Exibe o valor de N
    printf("N = %d\n", N);

    // Calcula e exibe os primeiros N números da sequência de Fibonacci
    for (int i = 0; i < N; i++) {
        printf("%d ", first);

        int next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
