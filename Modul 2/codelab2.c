#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//Alif Zaky Nasywa Muhammad - Informatika - 202410370110345 - Kelas H
int main() {
// Boolean values
	bool flagTrue = true; //bool bukan boolean, true bernilai = 1 
	bool flagFalse = false; //bool bukan boolean, false bernilai = 0
	printf("Boolean values demonstration:\n");
	printf("flagTrue: %d\n", flagTrue );// terdapat koma diluar petik, kurang nambahin variabel flagTrue
	printf("flagFalse: %d\n",flagFalse ); // terdapat koma diluar petik, kurang nambahin variabel flagFalse
// String operations
	char greeting[] = "Hello, World!";
	char copyGreeting[20];
	strcpy(copyGreeting, greeting); //mengcopy text yang ada di variabel greeting ke variabel copy Greeting
	printf("\nString operations:\n");
	printf("Original greeting: %s\n", greeting);// menampilkan output dari variabel greeting, yang dipanggil harusnya greeting 1
	printf("Copied greeting: %s\n", copyGreeting);// menampilkan output dari variabel copyGreeting, yang dipanggil harusnya copyGreeting
// Pointer demonstrations
	int number = 100;
	int *pointer = &number;
	printf("\nPointer demonstrations:\n");
	printf("Value of number: %d\n", number);// terdapat koma diluar petik , kurang nambahin variabel number
	printf("Address of number: %p\n", &number);//
	printf("Value of pointer: %p\n", &pointer);//kurang &
	printf("Value pointed by pointer: %d\n", *pointer );// terdapat koma diluar petik
return 0;
}