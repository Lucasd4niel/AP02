#include <stdio.h>

int main(void){

    /*declaração das variaveis, fui adicionando depois
    de passar o calculo pro papel apenas pra saber do que eu precisaria conforme fui codando*/
    float vel_media, temp_viagem, tanque_inicio, gasolina_necessaria, km_viagem, valor_total, abastecido_cidade, gasolina_pos_cidade;
    
    /*definição de constantes pros valores informados no inicion do exercicio
    usei mais pra testar mesmo, mas os colegas disseram que é bom declarar constantes
    por baa pratica quando o valor nao for mudar durante o codigo*/
    const int autonomia_carro = 12;
    const float gasolina_cidade = 4.80;
    const float gasolina_fora = 5.20;
    const int tam_tanque = 40;

    scanf("%f %f %f", &temp_viagem, &vel_media, &tanque_inicio);

    /*descobrir quantos KM total o carinha la vai viajar*/
    km_viagem = temp_viagem  * vel_media;
    
    /*descobrir quanto de gasolina ele vai usar pra poder viajar*/
    gasolina_necessaria = km_viagem / autonomia_carro;
    
    /*decobrir quanto ele pode abastecer na cidade, ja que como é mais barato com certeza
    vai ser mais viavel sempre abastecer na cidade prmeiro kkkkkk, exeto ele esteja com o tanque cheio*/
    abastecido_cidade = tam_tanque - tanque_inicio;

    /*if para verificar se ele consegue abastecer tudo na cidade, se conseguir nao precisa abastecer fora
    pra viajar e chegar com a mesma quantidade do tanque inicial*/
    if (gasolina_necessaria <= abastecido_cidade){
        valor_total = gasolina_necessaria * gasolina_cidade;
    }
    /*se ele nao conseguir fazer tudo com o abastecimento na cidade ele 
    tem que fazer paradas fora da cidade*/
    else{
        gasolina_pos_cidade = gasolina_necessaria - abastecido_cidade;
        valor_total = (abastecido_cidade * gasolina_cidade) + (gasolina_pos_cidade * gasolina_fora);
    }
    /*finaliza mostrando o resultado final de acordo com a estrutura de dedscisao que o
    programa entrar*/
    printf("R$ %.2f", valor_total);
    return 0;
}