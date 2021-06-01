#include <stdio.h>

int main(){
    int a=1;
    
    if(a>0){
        printf("A is positive number");
    }else if(a<0){
        printf("A negative number");
    }else{
        printf("zero");
    }
    
    switch (a) {
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        default: //else 같은 느낌
            break;
    }
    printf("%d",a);
    return 0;
}
