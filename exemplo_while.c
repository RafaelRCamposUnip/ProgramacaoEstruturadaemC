#include <stdio.h>

int main()
{
    int valor, soma;
    char resp;
    
    resp='s';
    soma=0;
    
    while(resp=='s'){
        printf("Informe um número ");
        scanf("%d", &valor);
        soma+=valor;
        printf("Deseja continuar(s/n)? ");
        scanf(" %c", &resp);
    }
    printf("Somatória é igual a %d", soma);

    return 0;
}
