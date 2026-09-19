#include <stdio.h>

int main()
{
    int num;
    printf("Informe a tabuada: ");
    scanf("%d", &num);
    printf("Calculando a tabuada\n");
    for (int i=1;i<=10;i++){
        printf("%d x %d = %d\n", num,i,(num*i));
    }
    return 0;
}
