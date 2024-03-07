#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
float salbase, gratif, salliq, salbruto, ir;
printf("Qual o salario base?:");
scanf("%f", &salbase);
printf("Qual a gratificação ?:");
scanf("%f", &gratif);

salbruto = salbase + gratif;

if (salbruto <= 1000 ) {
ir = salbruto * 0.15 ;
}else{
    ir = salbruto * 0.20;
}
salliq = salbruto - ir ;

printf("O seu salário líquido é:%.2f", salliq);

    return 0;
}
