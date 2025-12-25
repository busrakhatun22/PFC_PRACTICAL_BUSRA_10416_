#include <stdio.h>
int main() {
    //Name:Busra khatun
    //Erp:10416

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int space = n; space > i; space--)
            printf(" ");
        for (int star = 1; star <= 2*i-1 ; star++)
            printf("*");
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int space = n; space > i; space--)
            printf(" ");
        for (int star = 1; star <= 2* i-1 ; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}


//Enter n: 4
//*******
// *****
 // ***
  // *
  //***
 //*****
//*******
