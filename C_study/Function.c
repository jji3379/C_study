#include <stdio.h>

int star(int a){
    if(a==1){
        printf("***********\n");
        return 11;
    }else if(a==2){
        printf("@@@@@@@@@@@@@\n");
        return 22;
    }else{
        printf("error\n");
    }
    // 리턴 타입이 void 이기 때문에 아무것도 리턴 안해도 된다.
    // return; 만 써도 된다.
    return 33;
}

int add(int a, int b){
    // 지역 변수 (local variable)
    int sum=a+b;
    return sum;
}

int main(){
    /*
        < 함수의 장점 >
        1. 코드의 가독성이 올라갑니다.
        2. 재사용 가능하다.
        3. 디버깅, 에러찾기도 쉽다.
     
        < 함수의 종류 >
        1. 남의 함수 printf, rand()
        2. 내가 직접 만든 함수
     
        (리턴 타입) (함수의 이름) (인자/variable)
        리턴 타입 void : 아무것도 남기지 않는다, 리턴 하지 않음
     */
    int msg;
    printf("안녕..\n");
    msg=star(1);
    printf("유서 : %d\n",msg);
    printf("반가워..\n");
    msg=star(2);
    printf("오늘은 감성적인 하루였네..\n");
    msg=star(3);
    
    //printf 의 리턴타입 : int => 쓰여진 글자의 수 여서
    msg=printf("gunny\n");
    //리턴값 확인해보면 5가 나옴
    printf("%d\n",msg);
    
    printf("sum is : %d\n",add(5, 6));
    
    return 0;
}
