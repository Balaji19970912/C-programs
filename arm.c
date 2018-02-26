#include<stdio.h>
int main() {
    int a[]={0,1,153,370,371,407},i,n,flag=0 ;
    printf("Enter the number : ") ;
      scanf("%d",&n) ;
    for(i=0; i<=5; i++) {
        if(a[i]==n) {flag=1 ;}
    }
    if(flag) printf("Entered number is an armstrong number!\n");
    else printf("Entered number is not an armstrong number!\n");
    return 0 ;
}
