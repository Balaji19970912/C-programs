#include<stdio.h>
#include<malloc.h>
int main() {
   int *a,m,n,i,j,temp,flag=0 ;
   printf("Enter the number of array elements you need : ") ;
     scanf("%d",&n) ;
   a = (int *)malloc(sizeof(int)*n) ;
   printf("Enter array elements : \n") ;
     for(i=1; i<=n; i++) {
        scanf("%d",a+i) ;
     }
   printf("Entered array elements : \n") ;
     for(i=1; i<=n; i++) {
        printf("%d ",*(a+i)) ;
     }
   printf("\nEnter the element whose place you want to change : ") ;
     scanf("%d",&m) ;
   printf("Enter the place where you want to place that digit  : ") ;
     scanf("%d",&j) ;
   if(j<=n) {
     for(i=1; i<=n; i++) {
       if(*(a+i)==m) {
          temp=*(a+i) ;
          *(a+i)=*(a+j) ;
          *(a+j)=temp ;
          flag=1 ;
       }
     }
     if(flag) {
       printf("\nArray after changing : \n") ;
         for(i=1; i<=n; i++) {
            printf("%d ",*(a+i)) ;
         }
     }
     else printf("Number does not exists!\n") ;
   }
   else printf("Please enter valid input!\n") ;
   return 0 ;
}
