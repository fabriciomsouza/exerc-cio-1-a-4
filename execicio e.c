#include <stdio.h>

int main() {
    float prestacao, valor, taxa, tempo;

    // Solicita ao usu�rio que digite os valores necess�rios
    printf("Digite o valor da presta��o em atraso: ");
    scanf("%f", &prestacao);
    printf("Digite o valor original da presta��o: ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);
    printf("Digite o tempo de atraso (em meses): ");
    scanf("%f", &tempo);

    // Calcula o valor da presta��o em atraso
    prestacao = valor + (valor * (taxa / 100) * tempo);

    // Exibe o valor da presta��o em atraso
    printf("O valor da presta��o em atraso �: R$ %.2f\n", prestacao);

    return 0;
}
