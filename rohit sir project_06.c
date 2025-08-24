#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0) {
        printf("Divisible by both 2 and 3\n");
    } else if (n % 2 == 0 && n % 3 != 0) {
        printf("Divisible by 2 but not by 3\n");
    } else if (n % 2 != 0 && n % 3 == 0) {
        printf("Divisible by 3 but not by 2\n");
    } else {
        printf("Not divisible by 2 or 3\n");
    }

    return 0;
}