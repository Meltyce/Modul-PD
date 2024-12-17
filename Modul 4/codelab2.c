#include <stdio.h>

int main(){

	char inputString[30];
	int i, j, isUnik;

	printf("Masukkan string : ");
	scanf("%s", &inputString);

	for(i = 0; inputString[i] != '\0'; i++){
		isUnik = 1 ;

		for(j = 0; j < i ; j++){
			if(inputString[i] == inputString[j]){
				isUnik = 0;
				break;
			}
		}
		if(!isUnik){
			continue;
		}
		printf("%c", inputString[i]);
	}

	return 0;
}
