#include <stdio.h>

int main() {
    float prestacao, valor, taxa, tempo;

    // Solicita ao usuário que digite os valores necessários
    printf("Digite o valor da prestação em atraso: ");
    scanf("%f", &prestacao);
    printf("Digite o valor original da prestação: ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);
    printf("Digite o tempo de atraso (em meses): ");
    scanf("%f", &tempo);

    // Calcula o valor da prestação em atraso
    prestacao = valor + (valor * (taxa / 100) * tempo);

    // Exibe o valor da prestação em atraso
    printf("O valor da prestação em atraso é: R$ %.2f\n", prestacao);

    return 0;
}
