
/*maquina de saque 
solicite um valor do saque, numero inteiro
exemçlo
digite o valor do saque: 130
cedula R$: 50: 2
cedula R$: 20: 1
cedula R$ R%: 10: 1 */

#include <stdio.h> 
int main (){
    int saque =0, cedula =0, saldo= 0;

    printf("Digite o valor do saque: \n");
    scanf("%d", &saque);

    if (saque %10 != 0){
        printf("Não é disponivel sacar R$ %d \n", saque);

        return 1;
    }

    cedula = saque / 50;
    saldo= saque % 50;
    printf("Cedulas R$ 50: %d\n", cedula);

    cedula = saldo / 20;
    saldo %= 20; // saldo = saldo % 20
    printf("Cedulas de R$20: %d\n", cedula);

    cedula = saldo / 10;
    saldo %= 10;
    printf("Cedulas de R$10: %d\n", cedula);


    
    return 0;
}