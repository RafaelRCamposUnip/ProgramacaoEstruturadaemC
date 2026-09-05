#include <stdio.h>

int main()
{
    float valor1, valor2, resp;
    char ope, cont;
    do{
        printf("+-Adição"\n);
        printf("--Subtração"\n);
        printf("*-Multiplicação"\n);
        printf("/-Divisão"\n);
        printf("Informe a operação: ");
        scanf("%c", &ope);
        printf("Informe o valor1: ");
        scanf("%f", &valor1);
        printf("Informe o valor2: ");
        scanf("%f", &valor2);
        if(ope=='+'){
            printf("%f %c %f = %f", valor1, ope, valor2, (valor1+valor2));
        } else if(ope=='-'){
            printf("%f %c %f = %f", valor1, ope, valor2, (valor1-valor2));
        } else if(ope=='*'){
            printf("%f %c %f = %f", valor1, ope, valor2, (valor1*valor2));
        } else if(ope=='/'){
            if(valor2!=0){
                printf("%f %c %f = %f", valor1, ope, valor2, (valor1/valor2));
            } else{
                printf("Erro - Divisão por zero!");
            }
        }
        printf("Deseja continuar(s/n)? ");
        scanf(" %c", &resp);
    }
    while(resp=='s');
    return 0;
}
