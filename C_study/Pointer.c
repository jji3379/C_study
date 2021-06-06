#include <stdio.h>
int add(int num1, int num2){
    return num2-num1;
}
void swap(int* num1, int* num2){
    int temp; //임시 저장소
    
    // 스왑 부분
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    
}

int main(){
    /*
        == 포인터 ==
     
     - 종류
     int 포인터 => 4바이트
     float 포인터 => 4바이트
     char 포인터 => 1바이트
     
     64비트 주소에서 한 메모리의 크기는 8바이트
     포인터(*)의 크기는 8바이트 => 오히려 좋아.
     포인터는 변수명, 값 X => 주소를 가리킴
     */
    
    int a=5;
    int b=10;
    // asterisk(*) 용도
    // 1. 포인터를 선언할 때
    // 2. 해당 주소의 값에 접근하는 용도
    int* ptr;
    int* ptr2;
    
    // & : ampersand => &a : a변수의 주소
    // 주소를 원할 때 & 사용
    ptr=&a;
    ptr2=&b;
    
    printf("address of a is %x\n ",&a); // %x : 16진수 숫자를 나타냄
    printf("address of a is %p\n ",&a); // &p : 주소를 출력할 때는 printf 함수의 지정 서식인 %p 가 더 정확하다.
    
    printf("valule of ptr is %x\n ",ptr); // ptr 의 주소
   
    // ptr 의 값 => a의 값을 변경해도 a의 주소를 포인팅 한것이기 때문에 변경된 값으로 출력된다.
    printf("valule of ptr is %d\n ",*ptr);
    printf("b - a = %d\n", add(*ptr2,*ptr));
    
    // a와 b 의 값을 스왑하는 함수 예제
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    
    return 0;
}
