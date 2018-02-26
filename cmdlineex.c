#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    if(argc==2) {
        printf("Number of arguments entered is 2\n");
    }
    else if(argc>2){
        printf("Number of arguments entered are more than 2\n") ;
    }
    else {printf("Number of arguments entered are less than 2\n") ;
    }
    return 0 ;
}
