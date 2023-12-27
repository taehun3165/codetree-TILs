#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char lol[4][21]={'\0'};
    int i,j;
    for(i=0;i<4;i++){
        scanf("%s ",lol[i]);
    }
    for(i=3;i>=0;i--){
        
        printf("%s\n",lol[i]);
    }
    return 0;
}