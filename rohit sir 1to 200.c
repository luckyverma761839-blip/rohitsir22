#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a>= 100 && a<= 200) 
    {
        if (a% 2 == 0) 
            printf(" %d  Even ",a);
         else 
            printf(" %d  odd",a);
    }
     
     else
        printf(" %d invalid",a);
    

    return 0;
}