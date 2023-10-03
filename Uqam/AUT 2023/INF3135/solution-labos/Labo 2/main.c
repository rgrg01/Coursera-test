#include <stdio.h>
#include<string.h>


int main(int argc, char *argv[]){
	if (argc == 2){
		char* valeur = argv[];
		int longueur = strlon(valeur);
	    printf("la longueur de l'argument %s est de  %d", valeur,longueur );
}else {

	fprintf(stderr, "Erreur, stp un seul argument" );
 }
}
	
