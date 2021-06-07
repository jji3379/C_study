#include <stdio.h>
int main(){
    
    char arr[6]={"hello"};
    
    char* ptr;
    
    ptr=&arr[0];
    
    printf("%c\n",*(ptr+1)); // e 가 출력 / *ptr+1 만 쓰면 이상한 값 나옴 / +1 은 바이트의 크기
    // 배열도 주소를 가지고 있기 때문에 포인터가 배열의 주소를 그대로 가지고 간다고 생각할 수 있다.
    // 그러기에 ptr[1] : "e" 가 출력되게 된다.
    printf("%c\n",ptr[1]);
    
    // ptr** : 더블포인터 ( 포인터가 포인터를 포인팅 )
    // ptr*** : 트리블포인터 ( 실제로 사용됨 )
    return 0;
}
