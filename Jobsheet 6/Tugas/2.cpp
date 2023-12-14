/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>


int main()
{
    int i, j;

    // Perulangan untuk baris
    for (i = 1; i <= 5; i++)
    {
        // Perulangan untuk kolom
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

