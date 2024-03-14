#include <stdio.h>


int somar (){
float num1, num2, resultado;
printf("Digite um numero:");
scanf("%f", &num1);
printf("Digite outro numero:");
scanf("%f", &num2);
resultado = num1 + num2;
printf("O resultado da soma é:%.2f", resultado);

}

int subtrair(){
    float num1, num2, resultado;
    printf("Digite um numero:");
scanf("%f", &num1);
printf("Digite outro numero:");
scanf("%f", &num2);
resultado = num1 - num2;
printf("O resultado da subtracao é:%.2f", resultado);
}
int dividir(){
    float num1, num2, resultado;
    printf("Digite um numero:");
scanf("%f", &num1);
printf("Digite outro numero:");
scanf("%f", &num2);
resultado = num1 / num2;
printf("O resultado da divisao é:%.2f", resultado);
}
int multiplicar(){
    float num1, num2, resultado;
    printf("Digite um numero:");
scanf("%f", &num1);
printf("Digite outro numero:");
scanf("%f", &num2);
resultado = num1 * num2;
printf("O resultado da multiplicacao é:%.2f", resultado);
}

int main()
{
    int menu;
    
printf("Digite 1 para somar\n");
printf("Digite 2 para subtração\n");
printf("Digite 3 para dividir\n");
printf("Digite 4 para multiplicar \n");
scanf("%d", &menu);
switch(menu){
    case 1 : 
    
somar();
    case 2:
subtrair();
    case 3:
dividir();
    case 4:
multiplicar();

default: 
printf("digite um número valido");
    
}

    return 0;
}
