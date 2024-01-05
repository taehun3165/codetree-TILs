#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,i,hap=0,ahap=0;
    char w[11][101]={'\0'};
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%s",w[i]);
        hap+=strlen(w[i]);
        if(w[i][0]=='a')ahap++;
    }
    printf("%d %d",hap,ahap);
    return 0;
}