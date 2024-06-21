#include <stdio.h>

int main() {
    int A, B, C, D;
    int soma1, soma2, soma3, soma4, soma5, soma6;
    int mult1, mult2, mult3, mult4, mult5, mult6;

    // Solicita ao usuário que digite os valores de A, B, C e D
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    // Realiza as operações solicitadas
    soma1 = A + B;
    soma2 = A + C;
    soma3 = A + D;
    soma4 = B + C;
    soma5 = B + D;
    soma6 = C + D;

    mult1 = A * B;
    mult2 = A * C;
    mult3 = A * D;
    mult4 = B * C;
    mult5 = B * D;
    mult6 = C * D;

    // Exibe os resultados das operações
    printf("Resultados das adições:\n");
    printf("A + B = %d\n", soma1);
    printf("A + C = %d\n", soma2);
    printf("A + D = %d\n", soma3);
    printf("B + C = %d\n", soma4);
    printf("B + D = %d\n", soma5);
    printf("C + D = %d\n", soma6);

    printf("Resultados das multiplicações:\n");
    printf("A * B = %d\n", mult1);
    printf("A * C = %d\n", mult2);
    printf("A * D = %d\n", mult3);
    printf("B * C = %d\n", mult4);
    printf("B * D = %d\n", mult5);
    printf("C * D = %d\n", mult6);

    return 0;
}
