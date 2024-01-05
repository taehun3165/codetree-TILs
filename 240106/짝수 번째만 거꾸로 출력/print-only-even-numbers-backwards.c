#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,len,hol=0;
    char w[101];
    scanf("%s",w);
    len=strlen(w);
    for(i=len-1;i>=0;i--){
        if((i+1)%2==0)printf("%c",w[i]);
    }
    return 0;
}