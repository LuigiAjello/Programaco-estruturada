#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"portuguese");
	int contador;
	int senhadigitada;
	int senhacadastrada;
	printf("Faça uma senha: \n");
	scanf("%d", &senhacadastrada);
	while (contador<3){
	printf("Digite sua senha de cadastro \n");
	scanf("%d", &senhadigitada);
	if(senhacadastrada==senhadigitada){	
	printf("senha correta \n");
	break;
	}else if(contador<2){
	printf("continue tentando \n");
	}	
	contador ++;
	}
   if (contador == 3){
 	printf("Cadastro bloqueado");
 }	
	system("pause");
}