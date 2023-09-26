#include <stdio.h>
#include <stdlib.h>

int main (){
	int matriz[5][5] = {{0, 0, 7, 1, 0}, {1, 2, 4, 5, 1}, {2, 4, 2, 3, 2}, {3, 6, 0, 4, 3}, {4, 8, 2, 5, 9}};
	int operador;
	int b = 0;
	
	for(int a = 0; a < 5; a++){
		printf("\n  %d", matriz[a][0]);
		printf("\t%d", matriz[a][1]);
		printf("\t%d", matriz[a][2]);
		printf("\t%d", matriz[a][3]);
		printf("\t%d", matriz[a][4]);
		
		operador += matriz[a][b];
		b++;
	}
	
	printf("\n%d", operador);
	
	
	return 0;
}
