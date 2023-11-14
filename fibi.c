#include <stdio.h>

int main()
{
    int N = 10; // Defina N como o número desejado de termos da sequência Fibonacci

    int first = 0;
    int next = 0;
    int second = 1;

    // Exibe o valor de N
    printf("N = %d\n", N);

    // Calcula e exibe os primeiros N números da sequência de Fibonacci
    for (int i = N; i != 0; i--)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
