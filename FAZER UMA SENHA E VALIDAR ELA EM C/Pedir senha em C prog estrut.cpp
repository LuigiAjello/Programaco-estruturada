#include <stdio.h>
int main (){
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
	}else if(contador>3){
	printf("continue tentando \n");
	}	
	contador ++;
	}
   if (contador == 3){
 	printf("Cadastro bloqueado");
 }	
	system("pause");
}
