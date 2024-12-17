#include <stdio.h>

enum kelas {
	ekonomi = 1, bisnis , firstclass
};
//Alif Zaky Nasywa Muhammad - Codelab 2 - Modul 3 - Informatika - H - Smstr 1

int main(){
	int tiket ; 
	
	printf("Pilih jenis tiket anda : (1-3) \n");
	printf("1. Ekonomi \n2. Bisnis\n3. First Class :\nInput : ");
	scanf("%d",&tiket); 
	
	switch(tiket){ 
		case ekonomi : 
			 printf("harga tiket ekonomi adalah $300"); 
 	 	     break;
		case bisnis : 
             printf("Harga tiket bisnis adalah $400"); 
		 	 break;
		case firstclass : 
			 printf("Harga tiket first class adalah $500"); 
			 break;
		default : printf("Input tidak valid");
	}
	
	return 0;
}