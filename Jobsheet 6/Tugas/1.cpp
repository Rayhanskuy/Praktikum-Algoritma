/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>


int main()
{


	printf("    Program Deret Bilangan Ganjil Genap    \n");

	
	printf("Ganjil\n");
	for(int ganjil = 1; ganjil <= 49; ganjil += 2)
	{
		printf("%i,", ganjil);
	}
		printf("\n\n");
		printf(" Genap\n");
	for(int genap = 2; genap <= 50; genap += 2)
	{
		printf("%i,", genap);
	}
	return 0;
}
