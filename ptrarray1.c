#include<stdio.h>
#include<stdlib.h>
int main() {
    int *a1,i,n;
    printf("Enter the number of array elements that you want : ");
       scanf("%d",&n);
    if((a1=(int*)malloc(sizeof(n)))==NULL) {
        printf("Memory allocation is not possible");
        exit(1);
    }
    printf("Enter the array elements\n");
      for(i=0;i<n;i++){
        scanf("%d",a1+i);
      }
    printf("Entered array elements are : ");
      for(i=0;i<n;i++){
        printf("%d ",*(a1+i));
      }
    return 0;
}
