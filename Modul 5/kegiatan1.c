#include <stdio.h>
#include <string.h>

int main(){
	
	int input,i,j;
	char buah[10][20], temp[20];
	
	printf("Masukkan jumlah buah (maks 10) :  " );
	scanf("%d",&input);
	
	if(input > 10){
		printf("batas buah yang dapat diinputkan adalah 10");
		return 1;
	}
	
	for(i = 0; i < input; i++){
		printf("Masukkan nama buah ke%d : ", i + 1);
		scanf("%s",buah[i]);
	}
	
	printf("\n");
	printf("Urutan buah sesuai input user : \n");
	
	for(i = 0; i < input; i++ ){
		printf("%s \n", buah[i]);
	}
	
	for (i = 0; i < input - 1; i++) {
        for( j = i + 1; j < input; j++) {
            if (strcmp(buah[i], buah[j]) > 0) {
                strcpy(temp, buah[i]);
                strcpy(buah[i], buah[j]);
                strcpy(buah[j], temp);
            }
        }
    }
    
	printf("\n");
	printf("Buah dalam urutan abjad:\n");
    for (i = 0; i < input; i++) {
        printf("%s\n", buah[i]);
    }
	
	return 0;
}