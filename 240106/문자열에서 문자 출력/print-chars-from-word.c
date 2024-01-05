#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i;
    char w[11]={'\0'};
    scanf("%s",w);
    for(i=0;w[i]!='\0';i++){
        printf("%c\n",w[i]);
    }
    return 0;
}