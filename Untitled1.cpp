#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int xp;
	char nome[30];
	
	printf("Nome do her�i: \n");
	scanf("%s", &nome);
	
	printf("N�vel(XP) do her�i: \n");
	scanf("%d", &xp);
	
	if(xp <= 1000){
		printf("O Her�i de nome %s est� no n�vel de Ferro!", nome);
	}else if(xp <= 2000){
		printf("O Her�i de nome %s est� no n�vel de Bronze!", nome);
	}else if(xp <= 5000){
		printf("O Her�i de nome %s est� no n�vel de Prata!", nome);
	}else if(xp <= 7000){
		printf("O Her�i de nome %s est� no n�vel de Ouro!", nome);
	}else if(xp <= 8000){
		printf("O Her�i de nome %s est� no n�vel de Platina!", nome);
	}else if(xp <= 9000){
		printf("O Her�i de nome %s est� no n�vel de Ascendente!", nome);
	}else if(xp <= 10000){
		printf("O Her�i de nome %s est� no n�vel de Imortal!", nome);
	}else if(xp > 5000){
		printf("O Her�i de nome %s est� no n�vel de Radiante!", nome);
	}
	
	return 0;
}
