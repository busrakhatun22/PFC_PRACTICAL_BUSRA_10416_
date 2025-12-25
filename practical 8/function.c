#include<stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n!=0) {
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}
int main(){
    //Name:Busra khatun
    //Erp:10416
    int n;
    scanf("%d",&n);
    printf("sum of digits = %d",sumOfDigits(n));
    return 0;
}

//3
//sum of digits = 6

