#include <stdio.h>
#include <stdlib.h>
void m(int matriz[9][9]);
int main(){
	int matriz[9][9];
	m(matriz);
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void m(int matriz[9][9]){
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			if (i==j){
				matriz[i][j]=1;
			}
			else{
				matriz[i][j]=0;
			}
		}
	}
}
