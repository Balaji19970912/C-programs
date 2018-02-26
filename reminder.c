#include<stdio.h>
int main() {
    int ia,ib,iRes ;
    printf("Enter the values for a and b : \n") ;
      scanf("%d%d",&ia,&ib) ;
    iRes=ia-(ia/ib*ib) ;
    printf("Reminder = %d\n",iRes) ;
    return 0 ;
}
