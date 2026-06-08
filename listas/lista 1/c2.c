 #include <stdio.h>

void fizzBuzz(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fizzBuzz(n);

    return 0;
}