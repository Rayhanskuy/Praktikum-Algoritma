/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 
int main()
{
char name[30];
// puts seperti printf (untuk menampilkan output).
// simbol [^\n] pada tengah format agar teks yang mengandung spasi, hasilnya tidak dipecah.

puts("Hello siapa nama lengkapmu?");
scanf("%[^\n]s",&name);

printf("\n--------------------------------\n");
printf("Selamat datang %s dalam Pemrograman C!", name);


return 0;
}
