#include <stdio.h>

int main(){
    //for, while, do while
    
    int i;
    
    // 1. 루프의 초기값
    // 2. 종결 컨디션
    // 3. 내용을 실행
    // 4. 이후에 어떤 연산을 할건지
    
    // 언제 끝나는지 명확히 알 때 쓰는게 자연스럽다.
    for(i=0; i<10; i++){
        printf("Hello World %d\n",i);
    }
    
    //while(종결조건)
    // 특정 종결되는 상황이 있을 때 쓰는게 자연스럽다.
    // 조건이 진실이면 루프가 돈다. 거짓이 되면 종료된다.
    
    while(i<10){ // 0은 거짓, 나머지는 다 진실로 판단하여 무한루프가 돌게 된다.
        printf("Hello World %d\n",i);
        i++;
    }
    
    i=11;
    // do while은 조건문이 밑에 있어서 do 실행문이 최소 1번은 실행됨
    // 출력 결과 : do Hello World 11 만 출력됨 
    do{
        printf("do Hello World %d\n", i);
        i++;
    }while(i<10); //조건이 밑에 있음
    
    // 루프 중첩
    int j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d %d \n", i, j);
        }
    }
    
    return 0;
}
