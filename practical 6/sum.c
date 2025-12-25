#include <stdio.h>

int main() {
    //Name: Busra khatun
    //Erp:10416
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;  
        }
        sum = sum + i;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}

//Enter a number: 4
//Sum of even numbers = 6
