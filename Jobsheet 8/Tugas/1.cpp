/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

//fungsi rekursif : fungsi yang memanggil dirinya sendiri.

int perkalian(int a, int b) {
  // Basis: jika salah satu bilangan adalah nol, hasilnya adalah nol
  if (a == 0 || b == 0) {
    return 0;
  }
  // Basis: jika salah satu bilangan adalah satu, hasilnya adalah bilangan lainnya
  if (a == 1) {
    return b;
  }
  if (b == 1) {
    return a;
  }
  // Rekursif: perkalian(a, b) = a + perkalian(a, b - 1)
  return a + perkalian(a, b - 1);
}




int main() {
  int a, b;
  printf("Masukkan dua bilangan bulat positif: ");
  scanf("%d %d", &a, &b);
  
  // Memanggil fungsi perkalian dan mencetak hasilnya
  int hasil = perkalian(a, b);
  printf("Hasil perkalian %d x %d adalah %d\n", a, b, hasil);
  
  return 0;
}

