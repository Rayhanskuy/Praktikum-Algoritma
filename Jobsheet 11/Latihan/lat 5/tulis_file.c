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
	
	int i=1;
	for( 1; i<5; i++){
		//mengambil input dari user
		printf("isi baris ke-%d: ", i);
		fgets(text, sizeof(text), stdin);
		
		//menulis ke text ke file
		fputs(text, fptr);
	}

	printf("file berhasil ditulis\n");
	
	fclose(fptr);
	
	fptr = fopen("puisi.txt","r");
	
	while(fgets(buff, sizeof(buff), fptr))
	{
		printf("isi filenya sekarang: %s", buff);
	
	}
	
	//tutup file
	fclose(fptr);
}
