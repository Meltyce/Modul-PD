#include <stdio.h>


int faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}


int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}


void cetakFibonacci(int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int angkaFaktorial, angkaFibonacci;

   
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angkaFaktorial);
    printf("Faktorial dari %d adalah: %d\n", angkaFaktorial, faktorial(angkaFaktorial));

  
    printf("Masukkan angka untuk menghasilkan deret Fibonacci: ");
    scanf("%d", &angkaFibonacci);
    printf("Deret Fibonacci hingga suku ke-%d adalah: ", angkaFibonacci);
    cetakFibonacci(angkaFibonacci);

    return 0;
}
