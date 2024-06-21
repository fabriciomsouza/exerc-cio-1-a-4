#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    // Solicita ao usuário que digite as dimensões da caixa
    printf("Digite o comprimento da caixa (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura da caixa (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da caixa (em metros): ");
    scanf("%f", &altura);

    // Calcula o volume da caixa retangular
    volume = comprimento * largura * altura;

    // Exibe o volume calculado
    printf("O volume da caixa retangular é: %.2f metros cúbicos\n", volume);

    return 0;
}
