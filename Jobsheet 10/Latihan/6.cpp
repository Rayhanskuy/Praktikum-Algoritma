/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

struct complex{
	int imag;
	float real;
};

struct Number{
	struct complex comp;
	int integers;
};

int main(){
	struct Number num1, num2;
	
	num1.integers = 12;
	num1.comp.real = 44.22;
	num2.comp.imag = 11;
	
	printf("num 1 integers = %d\n", num1.integers);
	printf("num 1 real = %.2f\n", num1.comp.real);
	printf("num 2 imag = %d\n", num2.comp.imag);
}
