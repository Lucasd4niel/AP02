#include <stdio.h>

int main(void){
    int v1, v2, v3, v4, v5;
    int aux = 0;
    float soma = 0;
    float media;
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);
    scanf("%d", &v4);
    scanf("%d", &v5);
    if(v1 >=0 && v2 >= 0 && v3 >=0 && v4 >=0 && v5 >=0){
        soma = soma + v1;
        aux = aux + 1;
        if (v2 != v1){
            soma = soma + v2;
            aux = aux + 1;
        }else{
            soma = soma;
        }
        if (v3 != v2 && v3 != v1){
            soma = soma + v3;
            aux = aux + 1;
        }else{
            soma = soma;
        }
        if(v4 != v3 && v4 != v2 && v4 != v1){
            soma = soma + v4;
            aux = aux + 1;
        }else{
            soma = soma;
        }
        if (v5 != v4 && v5 != v3 && v5 != v2 && v5 != v1){
            soma = soma + v5;
            aux = aux + 1;
        }else{
            soma = soma;
        }

        media = soma / aux;
    }else{
        media = 0.000000;
    }
    printf("%f", media);
    return 0;
}


