#include <stdio.h>

int main(void) {
    int n;
    float temp;
    
    printf("Introduza um valor entre 0 e 1023 (Pressione Enter para inserir): ");

    scanf("%d", &n);     

    
    temp = (260.0 * n / 1023)-20;


    printf("O valor da temperatura e %.2f  \n", temp );
}