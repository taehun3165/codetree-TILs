#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,len,hol=0;
    char w[101];
    scanf("%s",w);
    len=strlen(w);
    if(len%2==0)hol++;
    for(i=len;i>=0;i--){
        if((i+hol)%2==0)printf("%c",w[i]);
    }
    return 0;
}