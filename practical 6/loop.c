#include <stdio.h>

int main() {
    //Name: Busra khatun
    //Erp:10416
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    while (a <= b) {
        printf("%d ", a);
        a++;
    }

    return 0;
}


//Enter a and b: 3 8
//3 4 5 6 7 8 