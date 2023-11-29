#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int xp;
	char nome[30];
	
	printf("Nome do herói: \n");
	scanf("%s", &nome);
	
	printf("Nível(XP) do herói: \n");
	scanf("%d", &xp);
	
	if(xp <= 1000){
		printf("O Herói de nome %s está no nível de Ferro!", nome);
	}else if(xp <= 2000){
		printf("O Herói de nome %s está no nível de Bronze!", nome);
	}else if(xp <= 5000){
		printf("O Herói de nome %s está no nível de Prata!", nome);
	}else if(xp <= 7000){
		printf("O Herói de nome %s está no nível de Ouro!", nome);
	}else if(xp <= 8000){
		printf("O Herói de nome %s está no nível de Platina!", nome);
	}else if(xp <= 9000){
		printf("O Herói de nome %s está no nível de Ascendente!", nome);
	}else if(xp <= 10000){
		printf("O Herói de nome %s está no nível de Imortal!", nome);
	}else if(xp > 5000){
		printf("O Herói de nome %s está no nível de Radiante!", nome);
	}
	
	return 0;
}
