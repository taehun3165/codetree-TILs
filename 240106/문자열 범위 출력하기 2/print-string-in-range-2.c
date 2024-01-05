#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int i,n,c;
    char w[101]={'\0'};
    scanf("%s %d",w,&n);
    c=strlen(w);
    for(i=c-1;i>=0;i--){
        if(i==c-n-1)break;
        printf("%c",w[i]);
    }
    return 0;
}