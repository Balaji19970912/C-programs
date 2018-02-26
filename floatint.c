#include<stdio.h>
int main() {
    int i,iNum ;
    float f,fNum,fSub ;
    printf("Enter the floating point number : ") ;
      scanf("%f",&f) ;
    fNum=f ;
    iNum=f ;
    fSub=fNum-iNum ;
    printf("Integer part is = %d\n",iNum) ;
    printf("Float part is = %f\n",fSub) ;
    return 0 ;
}
