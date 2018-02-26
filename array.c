#include<stdio.h>
#include<stdlib.h>
int main() {
  int a[10][10],i,j,m,n,a1,b ;
  printf("Enter the ROWs : ") ;
    scanf("%d",&m) ;
  printf("Enter the COLUMNSs : ") ;
    scanf("%d",&n) ;
  printf("Enter the array elements : \n") ;
    for(i=1; i<=m; i++) {
        for(j=1; j<=n; j++)
            scanf("%d",&a[i][j]) ;
    }
  printf("To find enter row and column : ") ;
    scanf("%d%d",&a1,&b) ;
  if(a1>m || b>n || a1<0 || b<0) {
    printf("Invalid Input!\n") ;
    exit(0) ;
  }
  printf("The results is : ") ;
  for(i=a1; i<=b; i++) {
    for(j=a1; j<=b; j++) {
        printf("%d\n",a[i][j]) ;
    }
  }
  return 0 ;
}
