#include <stdio.h>

int main(void){
    float temp_viagem, vel_media, l_tanque, tanque_inicial, valor_gasto, kmtotal, litros_total_viagem;
    const int tanque = 40;
    const int autonomia = 12;
    const int kmautonomia = 480; 
    const float combustivel_cidade = 4.80;
    const float combustivel_fora = 5.20;
    scanf("%f %f %f", &temp_viagem, &vel_media, &tanque);
    kmtotal = temp_viagem / vel_media;
    litros_total_viagem = kmtotal / autonomia;
    
    return 0;
}