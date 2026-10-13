#include <stdio.h>

int main(void) {
    int n;
    float temp;
    
    printf("Introduza um valor entre 0 e 1023 (Pressione Enter para inserir): ");
    

    if(scanf("%d", &n)!= 1){
        printf("invalido\n");
    }else {
        temp = (260.0 * n / 1023)-20;
        printf("O valor da temperatura e %f   \n", temp );
    }

    if(temp < -10 || temp > 190){
        printf("Valor fora de gama\n");
    }
    
}