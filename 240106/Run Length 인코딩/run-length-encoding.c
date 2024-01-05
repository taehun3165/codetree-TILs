#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nc[501]={0},i,c=0,cn=1;
    char w[1001]={'\0'},wh[501]={'\0'};
    scanf("%s",w);
    for(i=0;w[i]!='\0';i++){
        if(w[i]!=w[i+1]){
            nc[c]=cn;
            wh[c]=w[i];
            cn=1;
            c++;
        }
        else{
            cn++;
        }
    }
    printf("%d\n",c*2);
    for(i=0;i<c;i++){
        printf("%c%d",wh[i],nc[i]);
    }
    return 0;
}