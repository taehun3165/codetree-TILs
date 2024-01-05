#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i;
    char w[11][201];
    for(i=0;i<10;i++){
        scanf("%s",w[i]);
        if(i%2==0)printf("%s\n",w[i]);
    }
    return 0;
}