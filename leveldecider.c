#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	char name[90]; 
	int experience;
	char level[10];
	
	setlocale(LC_ALL, "Portuguese");
	printf("Olá, escolha um nome para o seu herói: \n");
	scanf("%[^\n]", &name);
	
	printf("Quanto de experiência ( XP ) seu personagem tem? \n");
	scanf("%i", &experience);
	
	
	if (experience < 1000) {
		strcpy(level, "Ferro");
	} else if (experience > 1000 && experience < 2000) {
	    strcpy(level, "Bronze");
	} else if (experience > 2000 && experience < 5000) {
	    strcpy(level, "Prata");
	} else if (experience > 5000 && experience < 7000) {
	    strcpy(level, "Ouro");
	} else if (experience > 7000 && experience < 8000) {
	    strcpy(level, "Platina");
	} else if (experience > 8000 && experience < 9000) {
	    strcpy(level, "Ascendente");
	} else if (experience > 9000 && experience < 10000) {
	    strcpy(level, "Imortal");
	} else if (experience >= 10001) {
	    strcpy(level, "Radiante");
	}
	
	
    printf("\n\n O Heroí de nome %s", name);
    printf(" está no nível de %s", level);
	
}





