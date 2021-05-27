
// variable - 변할 수 있는 어떤 것
// constant - 변할 수 없는 것

#include <stdio.h>
#define pi 3.1415 //고정

int main() {
    
    int age, month,day;
    age=26;
    month=5;
    day=19;
    
    float weight;
    char letter_grade='a';
    
    weight=60.5;
    
    // \n : 뉴라인, \t 들여쓰기
    // int : %d
    //float : %f
    // %.2f : 소수점 2자리 까지
    //char : %c
    printf("I'm %d years old\n",age);
    printf("\t I'm %.2fkg \n",weight);
    printf("I got %c\n",letter_grade);
    return 0;
}
