#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
float salbase, gratif, salliq, salbruto, ir;
printf("Qual o salario base?:");
scanf("%f", &salbase);
printf("Qual a gratifica��o ?:");
scanf("%f", &gratif);

salbruto = salbase + gratif;

if (salbruto <= 1000 ) {
ir = salbruto * 0.15 ;
}else{
    ir = salbruto * 0.20;
}
salliq = salbruto - ir ;

printf("O seu sal�rio l�quido �:%.2f", salliq);

    return 0;
}
