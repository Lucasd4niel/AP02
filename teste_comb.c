#include <stdio.h>

int main(void){
    int v1, v2, v3, v4, v5;
    int aux = 0;
    double soma = 0;
    double media;
    scanf("%d %d %d %d %d", &v1, &v2, &v3, &v4, &v5);
    if (v1 >= 0){
        soma += v1;
        aux += 1;
    }
    if (v2 >= 0 && v2 != v1){
        soma += v2;
        aux += 1;
    }
    if (v3 >= 0 && v3 != v1 && v3 != v2){
        soma += v3;
        aux += 1;
    }
    if (v4 >= 0 && v4 != v1 && v4 != v2 && v4 != v3){
        soma += v4;
        aux += 1;
    }
    if (v5 >= 0 && v5 != v1 && v5 != v2 && v5 != v3 && v5 != v4){
        soma += v5;
        aux += 1;
    }
    media = soma / aux;
    printf("%f", media);
    return 0;
}