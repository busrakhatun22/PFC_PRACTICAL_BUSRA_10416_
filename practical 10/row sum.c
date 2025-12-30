#include <stdio.h>

int main() {
    //Name; Busra khatun , Erp:10416
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Row-wise sum
    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}


//2 3
//1 2 3
//4 5 6
//Sum of row 1 = 6
//Sum of row 2 = 15
