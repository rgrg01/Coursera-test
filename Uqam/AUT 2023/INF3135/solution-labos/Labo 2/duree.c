#include <stdio.h>
#define NUM_SECONDES_DANS_JOUR 86400

void afficher_duree(unsigned int num_secondes){
 if (num_secondes>NUM_SECONDES_DANS_JOUR){
 	fprintf(stderr, "Plus de 24h");
  } else{

	int h = num_secondes/3600;
	num_secondes = num_secondes % 3600;
	int m = num_secondes/60;
	int s = num_secondes%= 60;
	printf("%d:%d:%d",h,m,s );
}
	}

int main(int argc, char * argv[]){
	unsigned int test[] = {[0]:0,[1]:1,[2]:3599,[3]:8000}
	for (int i = 0; i < 4; ++i){
		printf("test %d\n",i);
		afficher_duree(num_secondes:test[i]);
	}
	
	return 0;
}