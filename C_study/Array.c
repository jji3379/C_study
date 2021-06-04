#include <stdio.h>

int main(){
    // Array : 같은 데이터 타입을 가진 다수의 변수들을 하나의 변수만으로 저장할 수 있게 도와주는 자료구조다.
    // < 숫자형 배열 >
    int a[10]; // 배열의 크기, []안에 변수 안쓰고 확실한 숫자를 쓰는게 좋음
    
    int i;
    for(i=0; i<10; i++){
        a[i]=i+1;
    }
    for(i=0; i<10; i++){
        printf("\n a[%d] = %d",i,a[i]);
    }
    int aa[10]={1,2,3,4,5,6,7,8,9,10};
    
    float avg=0;
    for(int j=0; j<10; j++){
        avg+=aa[j];
    }
    avg/=10;
    
    printf("\n average is : %f\n",avg);
    
    // < 문자열 배열 >
    // \0 : null terminator
    char c[6]={'g','u','n','n','y','\0'}; //문자형 배열의 경우 마지막에 \0을 선언해 주어야 한다.
    char c2[6]="gunny"; // " " 더블 따옴표로 쓰면 \0 안써도 됨. 치트키!!
    char c3[]="gunny"; // 배열 크기 아몰랑으로 해도 알아서 지정됨 
    printf("\n %s\n",c3);
    return 0;
}
