#include<stdio.h>
int main() {
  int a[100],b[100],i,j,m,n,sum=0 ;
  printf("How many elements for 2 arrays : ") ;
    scanf("%d",&m) ;
  printf("Enter the array elements for array1 : \n") ;
    for(i=0; i<m; i++) {
        scanf("%d",&a[i]) ;
    }
  printf("Enter the array elements for array2 : \n") ;
    for(i=0; i<m; i++) {
        scanf("%d",&b[i]) ;
    }
  printf("The sum is : \n") ;
  for(i=0; i<m; i++) {
    sum=a[i]+b[i] ;
    printf("%d ",sum) ;
    sum=0 ;
  }
  return 0 ;
}
