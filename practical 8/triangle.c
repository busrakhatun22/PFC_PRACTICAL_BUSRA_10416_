#include <stdio.h>
void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    //Name:Busra khatun
    //Erp:10416
    int n;
    printf("Enter height: ");
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}


//Enter height: 5
//*
//**
//***
//****
//*****