#include <stdio.h>
#include <string.h>
int main(){
    char arr[100]="afawefadsfaewafafe";
    char arr2[100]="gunny";
    int box;
    
    // strlen : 문자열의 길이
    box=strlen(arr);
    printf("%d\n",box);
    
    // strcpy : 문자열 복사
    strcpy(arr,arr2); // arr에 arr2 값을 복사해 넣는다 => gunny
    printf("%s\n",arr);
    
    // strcmp() : 문자열 비교
    box=strcmp(arr, arr2);
    
    if(box==0){
        printf("Same String\n");
    }else{
        printf("Diff String\n");
    }
    
    // strcat() : 문자열 연결
    strcat(arr, arr2);
    printf("%s\n",arr);
    
    // strchr() : 찾고싶은 단어 이후 부터 출력 => nny 출력됨
    char ch='n';
    char *pos;
    pos=strchr(arr, ch);
    printf("%s\n",pos);
    return 0;
    
    char str[]="This is a sample string";
    char *pch;
    printf("Lokking for the 's' character in \"%s\"...\n",str);
    pch=strchr(str, 's');
    
    while(pch!=NULL){ // null 대문자로 써야 인식됨 
        printf("found at %d\n",pch-str+1);
        pch=strchr(pch+1,'s');
    }
}
