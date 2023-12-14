/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

int main()
{
    // Deklarasi variabel
    int i, j;

    // Perulangan untuk baris
    for (i = 1; i <= 5; i++)
    {
        // Perulangan untuk kolom
        for (j = 1; j <= i; j++)
        {
            // Mencetak hasil perkalian i dan j
            printf("%d ", i * j);
        }
        // Mencetak baris baru
        printf("\n");
    }

    return 0;
}


