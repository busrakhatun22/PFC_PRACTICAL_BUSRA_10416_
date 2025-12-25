#include<stdio.h>
int main(){
    //Name:Busra khatun
    //Erp:10416
    int n;
    scanf("%d",&n);
    char ch='A';
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%c",ch);
            ch++;
    }
    printf("\n");
    ch='A';
}
return 0;
}

//4
//A
//AB
//ABC
//ABCD