#include <stdio.h>

int main() {
    int A, B, temp;

    // Solicita ao usu�rio que digite os valores de A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Troca os valores de A e B usando uma vari�vel tempor�ria
    temp = A;
    A = B;
    B = temp;

    // Exibe os valores trocados de A e B
    printf("Depois da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
