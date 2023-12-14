/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>
struct student{
	char name[50];
	int age;
};

int main(){
	struct student s1;
	
	printf("Enter name: ");
	scanf("%[^\n]s", s1.name);
	
	printf("Enter age: ");
	scanf("%d", &s1.age);
	
	display(s1); //passing structure as an argument
}

//membuat fungsi dengan dtrust sebagai parameter

void display(struct student s){
	printf("\nDisplaying Information\n");
	printf("Name: %s", s.name);
	printf("\nRoll: %d", s.age);
}
