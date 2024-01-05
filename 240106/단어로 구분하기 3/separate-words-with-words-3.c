#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i;
    char w[11][201];
    for(i=0;i<10;i++){
        scanf("%s",w[i]);
    }
    for(i=9;i>=0;i--){
        printf("%s\n",w[i]);
    }
    return 0;
}