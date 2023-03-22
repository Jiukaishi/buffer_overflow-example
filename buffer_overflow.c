//#include <stdlib.h>
#include <stdio.h>

void function(int a, int b, int c){
    char buffer1[5];
    char bufffer2[10];
    char *ret;
    ret = buffer1+29;
    int* tmp = ret;
    (*tmp)+=7;
}
void main(){
    int x;
    x=0;
    function(1,2,3);
    x=1;
    printf("%d\n",x);
}