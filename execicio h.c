#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    // Solicita ao usu�rio que digite as dimens�es da caixa
    printf("Digite o comprimento da caixa (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura da caixa (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da caixa (em metros): ");
    scanf("%f", &altura);

    // Calcula o volume da caixa retangular
    volume = comprimento * largura * altura;

    // Exibe o volume calculado
    printf("O volume da caixa retangular �: %.2f metros c�bicos\n", volume);

    return 0;
}
