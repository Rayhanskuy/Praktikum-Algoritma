/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 
int main(){
	
	printf("\n menghitung luas permukaan dan volume bola basket\n");
	printf("\n----------------------------------------------\n");
	
	const double PI = 3.14;
	double d, r, L, V;
	
	printf("Masukkan diameter bola (cm): ");
	scanf("%lf", &d);
	
	r = d / 2;
	L = 4 * PI * r * r;
	V = 4 * PI * r * r * r / 3;
	
	printf("nilai luas permukaan bola basket= %.2lf\n", L);
	printf("nilai volume bola basket= %.2lf\n", V);
	
	return 0;
	
}
