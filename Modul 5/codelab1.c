#include <stdio.h>
#include <string.h>

int main(){
	
	char siswa[5][10] = {"Alice", "Bob", "Charlie", "David", "Eva"};
	int nilai[5][2] = {{1,85},{2,90},{3,78},{4,92},{5,88}};
	int i;
	
	printf("Daftar nama dan nilai awal semua siswa \n");
	for(i = 0; i < 5; i++){
		printf("%d. %s : %d \n", nilai[i][0],siswa[i],nilai[i][1]);
	}
	
	for(i = 0; i < 5; i++){
		if(strcmp(siswa[i],"David") == 0){
			nilai[i][1] = 95 ;
			break;
		}
	}
	
	printf("Daftar nama dan nilai baru semua siswa \n");
	for(i = 0; i < 5; i++){
		printf("%d. %s : %d \n", nilai[i][0],siswa[i],nilai[i][1]);
	}
	
	return 0;
}