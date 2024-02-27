#include mk
int main (){
//Declarando as variaveis (Poderia ter botado = 0 para boa pratica )
float altura;
char sexo;
float pesoideal;
    printf("Qual o seu sexo? Digite M para Mulher e H para Homem:"); 
scanf("%c", &sexo); 
switch (sexo){ //tipo de condicional poderia ser "if e else" mas optei assim para facilmente bloquear se não digitar a letra certa (M ou F)
case'F':
    printf("Qual a sua altura?");
scanf("%f", &altura);
 pesoideal = (62.1*altura)-44.7;  //Cálculo que deve ser feito para o sexo feminino 
   printf("seu peso ideal:%f",pesoideal);    
       break; // C O M E N T A R  D P S !!!!!
 case 'M':
    printf("Qual a sua altura?");
scanf("%", &altura);
 pesoideal = (72.7*altura)-58;
   printf("seu peso ideal:%f",pesoideal);
default:
printf("VC DIGITOU UMA OPÇÂO ERRADA");
}
return 0;
}