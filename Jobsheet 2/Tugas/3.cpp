/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 

int main()
{
float alas, tinggi, luas;

printf("masukkan nilai alas (cm): ");
scanf("%f", &alas);

printf("masukkan nilai tinggi (cm): ");
scanf("%f", &tinggi);

luas= 0.5*alas*tinggi;

printf("luas segitiga adalah %.2f cm^2\n ", luas);

return 0;
	
	
}
