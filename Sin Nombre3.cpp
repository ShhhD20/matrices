#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int matriz1[3][3];
	int matriz2[3][3];
	srand(time(NULL));
	
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++){
			matriz1[a][b] = rand() % 6;
			matriz2[a][b] = rand() % 6;
			printf("  %d", matriz1[a][b]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(int c = 0; c < 3; c++){
		for(int d = 0; d < 3; d++){
			printf("  %d", matriz2[c][d]);
		}
		printf("\n");
	}
		
	return 0;
}
