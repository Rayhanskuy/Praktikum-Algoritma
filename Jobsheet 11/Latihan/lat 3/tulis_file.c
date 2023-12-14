/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	#include <stdio.h>

void main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file
	fptr =fopen("puisi.txt", "w");
	
	//mengambil input dari user
	printf("inputkan isi file: ");
	fgets(text, sizeof(text),stdin);
	
	//menulis ke text ke file
	fputs(text, fptr);
	
	printf("file berhasil ditulis\n");
	
	fclose(fptr);
}
