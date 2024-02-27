#include <stdio.h>

long int largest_prime_factor(long int n) {
    long int max_prime = -1;
	long int i;

    while (n % 2 == 0) {
        max_prime = 2;
        n = n / 2;
    }

    for (i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            max_prime = i;
            n = n / i;
        }
    }

    if (n > 2) {
        max_prime = n;
    }

    return max_prime;
}

int main() {
    long int number = 612852475143;
    printf("Largest prime factor of %ld is: %ld\n", number, largest_prime_factor(number));
    return 0;
}
