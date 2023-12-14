/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 

int main()
{
char nama[40], prodi[40], fakultas[40];
int nim;
float Npraktikum, uts, uas, Nakhir;

//input data

	printf("Nama: ");
	scanf("%[^\n]s", nama);

		printf("NIM: ");
		scanf("%d", nim);

			printf("Program Studi: ");
			scanf("%s", prodi);

				printf("Fakultas: ");
				scanf("%[^\n]s", fakultas);

//input nilai

				printf("\nNilai Praktikum: ");
				scanf("%lf", Npraktikum);

			printf("Nilai UTS: ");
			scanf("%lf", uts);

		printf("Nilai UAS: ");
		scanf("%lf", uas);

	printf("Nilai Akhir: ");
	scanf("%lf", Nakhir);


Nakhir= 0.3 * Npraktikum + 0.3 * uts+ 0.4 * uas;

printf("\nData Mahasiswa\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Program Studi: %s\n", prodi);
    printf("Fakultas: %s\n", fakultas);
    printf("Nilai Akhir: %.2f\n", Nakhir);

    return 0;




}
