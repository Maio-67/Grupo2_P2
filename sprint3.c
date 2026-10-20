#include <stdio.h>

int main(void) {
    int n;
    float temp;
    int resultado;

    printf("Introduza valores entre 0 e 1023 (-1 para terminar):\n");

    while (1) {
        printf("Valor: ");
        resultado = scanf("%d", &n);

        if (resultado != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }

        if (n == -1) {
            printf("Fim da leitura.\n");
            break;
        }

        temp = (260.0 * n / 1023) - 20;

        if (temp < -10 || temp > 190) {
            printf("Valor fora de gama\n");
        } else {
            printf("O valor da temperatura e %.2f °C\n", temp);
        }
    }

    return 0;
}