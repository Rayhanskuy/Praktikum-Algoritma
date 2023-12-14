/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>
 typedef struct Distance{
 	int feet;
 	float inch;
 } distance;
 
 int main(){
 	//menggunakan struct
 	distance dist1, dist2;
 	
 	//mengisi nilai ke struct
	dist1.feet= 12;
	dist1.inch = 20;
	
	dist2.feet = 15;
	dist2.inch = 30;
	
	//mencetak isi struct
	printf("## Distance 1 ##\n");
	printf("Jarak dalam feet: %d\n", dist1.feet);
	printf("Jarak dalam inch: %.2lf\n", dist1.inch);
	
	printf("## Distance 2 ##\n");
	printf("Jarak dalam feet: %d\n", dist2.feet);
	printf("Jarak dalam inch: %.2lf\n", dist2.inch);
	

}
