#include<stdio.h>
int i=5 ;
int main() {
    int i=9 ;
    extern int i;
    printf("%d",i);
    return 0 ;
}
