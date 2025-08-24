#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float percentage;
    int i;

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    percentage = (sum / 500.0) * 100;

    printf("\nTotal Marks = %d", sum);
    printf("\nPercentage = %.2f%%\n", percentage);

    return 0;
}
