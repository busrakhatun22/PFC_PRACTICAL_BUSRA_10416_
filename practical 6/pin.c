#include <stdio.h>
int main() {
    //Name:Busra khatun
    //Erp:10416
    int pin = 1234;
    int x;
    printf("Enter PIN: ");
    scanf("%d", &x);
    if (x== pin)
        printf("Access Granted");
    else
        printf("Wrong PIN");
    return 0;


}


//Enter PIN: 1234
//Access Granted
