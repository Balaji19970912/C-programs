#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,area=0,s=0 ;
    printf("Enter the values for a b and c : ") ;
      scanf("%d%d%d",&a,&b,&c) ;
    s=(a+b+c)/2 ;
    area=sqrt(s*(s-a)*(s-b)*(s-c)) ;
    printf("S=%d and Area=%d\n",s,area) ;
    return 0 ;
}
