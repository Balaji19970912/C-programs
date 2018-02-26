#include<stdlib.h>
#include<stdio.h>
int main() {
    int num,res=0,rem=0,base=1;
    printf("Enter the value for N : ");
      scanf("%d",&num);
    while(num>0){
        rem=num%2;
        res=res+rem*base;
        num/=2;
        base*=10;
    }
    printf("Decimal to binary = %d\n",res);
    return 0;
}
