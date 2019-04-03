#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float euclidea(int uno, int dos, int tres, int cuatro);
int main(){
	int x, y, a, b;
	float final;
	printf("Intoduzca un primer vector separado por un intro: ");
	scanf("%i", &x);
	scanf("%i", &y);
	printf("Intoduzca el segundo vector de igual forma: ");
	scanf("%i", &a);
	scanf("%i", &b);
	final = euclidea(x,y,a,b);
	final = sqrt(final);
	printf("El resultado es %f \n", final);
	return 0;
}
float euclidea(int uno, int dos, int tres, int cuatro){
	int primera[2] = {uno, dos};
	int segunda[2] = {tres, cuatro};
	float cua = 0;
	for (int i=0;i<2;i++){
		int pos = (primera[i]-segunda[i]);
		cua = cua + (pos * pos);
	}
	return cua;
}
