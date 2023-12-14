/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>
int main(){
	char name[20], web_address[30];
	
	printf("Nama: ");
	scanf("%s", &name);
	
	printf("Alamat web: ");
	scanf("%s", &web_address);
	
	printf("\n---------------------\n");
	printf("Nama yang diinputkan: %s\n", name);
	printf("Alamat Web yang diiinputkan: %s\n", web_address);
	
	return 0;
}
