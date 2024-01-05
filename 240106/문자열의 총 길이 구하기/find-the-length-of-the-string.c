#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char lol[10][201]={'\0'};
    int i=0,hap=0;
    for(i=0;i<10;i++){
        scanf(" %s",lol[i]);
    }
    for(i=0;i<10;i++){
        hap+=strlen(lol[i]);
    }
    printf("%d",hap);
    return 0;
}