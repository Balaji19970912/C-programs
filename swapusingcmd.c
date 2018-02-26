#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]) {
    int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    printf("Before swapping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are a=%d and b=%d\n",a,b);
    return 0;
}

