#include <stdio.h>
#include <stdlib.h>
void m(int matriz[5][5]);
int main(){
	int matriz[5][5];
	m(matriz);
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void m(int matriz[5][5]){
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			matriz[i][j]=(rand()%12)+3;
		}
	}
}
