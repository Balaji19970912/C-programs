#include<stdio.h>
#include<stdlib.h>
int main(){
 int a[10],i,n,sum=0;
 printf("How many digits you want to enter : ");
  scanf("%d",&n);
 if(n>10){
    printf("Enter once again!");
    exit(0);
  }
 for(i=0;i<n;i++){
    a[i]=rand()%100;
 }
 printf("The numbers taken are : ");
 for(i=0;i<n;i++){
    printf("%d ",a[i]);
 }
 for(i=0;i<n;i++){
    sum=sum+a[i];
 }
 printf("\nThe sum is = %d",sum);
 return 0;
}
