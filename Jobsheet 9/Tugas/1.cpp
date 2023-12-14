/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

int main() {
    char kata[] = "BORLAND";
    char *ptr = kata;
    

    for (int i = 0; i < 7; i++) {
        for (int j = i; j < 7; j++) {
            printf("%c", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}
