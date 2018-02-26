#include<stdio.h>
#include<stdlib.h>
int main(){
 int i,j,m,n,p,q,sum=0,a2[10][10],a1[10][10];
 printf("Enter the 'ROW' no for MATRIX 1 : ");
  scanf("%d",&m);
 printf("Enter the 'COL' no for MATRIX 1 : ");
  scanf("%d",&n);
 printf("Enter the 'ROW' no for MATRIX 2 : ");
  scanf("%d",&p);
 printf("Enter the 'COL' no for MATRIX 2 : ");
  scanf("%d",&q);
 if(m==p && n==q) {
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        a1[i][j]=rand()%10;
    }
    for(i=0;i<p;i++){
        for(j=0;j<q;j++)
        a2[i][j]=rand()%20;
    }
    printf("Enter the MATRIX 1 elements are : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {printf("%d ",a1[i][j]);}
        printf("\n");
    }
    printf("Enter the MATRIX 2 elements are : \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++)
        {printf("%d ",a2[i][j]);}
        printf("\n");
    }
    printf("\nThe sum of 2 MATRICES is \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {sum=a1[i][j]+a2[i][j];
        printf("%d ",sum);}
        printf("\n");
    }
 }
 else printf("Addition of matrix cannot be performed!");
 return 0;
}
