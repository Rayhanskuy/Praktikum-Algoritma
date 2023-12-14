/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	#include <stdio.h>
	#include <stdlib.h>

int main()
{
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if ((fptr = fopen("puisi.txt.txt","r")) == NULL){
		printf("Error: File tidak ada!");
		exit(1);
	}
	
	//baca isi file dengan gets lalu simpan ke buff
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
		fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
		fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
		fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);

	//tutup filen
	fclose(fptr);
	
	return 0;
}

