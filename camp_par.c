#include <stdio.h>

int main(void){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if( a >= 0 && b >= 0 && c >= 0){
        if (a >= b && a >= c){
            if (a != b && b > c){
                printf("1º colocado: A (%.2f ponto(s)) / 2º colocado B (%.2f ponto(s)) / 3º colocado C (%.2f ponto(s)).\n", a, b, c);
            }
            else{
                if (a != c && c > b){
                    printf("1º colocado: A (%.2f ponto(s)) / 2º colocado C (%.2f ponto(s)) / 3º colocado B (%.2f ponto(s)).\n", a, c, b);
                }
                else{
                    if (a == b && a == c){
                        printf("Os três competidores empataram em 1º lugar (%.2f ponto(s)).\n", a);
                    }
                    else{
                        if (a == b){
                            printf("empatados em 1º: A e B (%.2f ponto(s)) / 2º colocado: C (%.2f ponto(s)).\n", a, c);
                        }
                        else{
                            if (a == c){
                            printf("empatados em 1º: A e C (%.2f ponto(s)) / 2º colocado: B (%.2f ponto(s)).\n",a ,b);
                            }else{
                                printf("1º colocado: A (%.2f ponto(s)) / empatados em segundo: B e C (%.2f ponto(s)).\n", a, b);
                            }
                        }
                    }
                }
            }
        }
        else{
            if (b >= a && b >= c){
                if (b != a && a > c){
                    printf("1º colocado: B (%.2f ponto(s)) / 2º colocado A (%.2f ponto(s)) / 3º colocado C (%.2f ponto(s)).", b, a, c);
                }
                else{
                    if (b != c && c > a){
                        printf("1º colocado: B (%.2f ponto(s)) / 2º colocado C (%.2f ponto(s)) / 3º colocado A (%.2f ponto(s)).\n", b, c, a);
                    }
                    else{
                        if (b == a && b == c){
                            printf("Os três competidores empataram em 1º lugar (%.2f ponto(s)).\n", b);
                        }
                        else{
                            if (b == a){
                                printf("empatados em 1º: A e B (%.2f ponto(s)) / 2º colocado: C (%.2f ponto(s)).\n", b, c);
                            }
                            else{
                                if (b == c){
                                printf("empatados em 1º: B e C (%.2f ponto(s)) / 2º colocado: A (%.2f ponto(s)).\n",b ,a);
                                }else{
                                    printf("1º colocado: B (%.2f ponto(s)) / empatados em segundo: A e C (%.2f ponto(s)).\n", b, a);
                                }
                            }
                        }
                    }
                }
            }
            else{
                if (c != a && a > b){
                    printf("1º colocado: C (%.2f ponto(s)) / 2º colocado A (%.2f ponto(s)) / 3º colocado B (%.2f ponto(s)).", c, a, b);
                }
                else{
                    if (c != b && b > a){
                        printf("1º colocado: C (%.2f ponto(s)) / 2º colocado B (%.2f ponto(s)) / 3º colocado A (%.2f ponto(s)).\n", c, b, a);
                    }
                    else{
                        if (c == a && c == b){
                            printf("Os três competidores empataram em 1º lugar (%.2f ponto(s)).\n", c);
                        }
                        else{
                            if (c == a){
                                printf("empatados em 1º: A e C (%.2f ponto(s)) / 2º colocado: B (%.2f ponto(s)).\n", c, b);
                            }
                            else{
                                if (c == b){
                                printf("empatados em 1º: B e C (%.2f ponto(s)) / 2º colocado: A (%.2f ponto(s)).\n",c ,a);
                                }else{
                                    printf("1º colocado: C (%.2f ponto(s)) / empatados em segundo: A e B (%.2f ponto(s)).\n", c, a);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else{
        printf("Uma ou mais pontuações informadas é inválida.\n");
    }
    return 0;
}