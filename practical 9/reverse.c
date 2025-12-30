#include <stdio.h>

int main() {
    //Name; Busra khatun , Erp:10416
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Reversed array:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}


//5
//1 2 3 4 5
//5 4 3 2 1
