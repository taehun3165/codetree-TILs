#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nc[501]={0},i,c=0,cn=1,call=0;
    char w[1001]={'\0'},wh[501]={'\0'};
    scanf("%s",w);
    for(i=0;w[i]!='\0';i++){
        if(w[i]!=w[i+1]){
            nc[c]=cn;
            wh[c]=w[i];
            if(cn>=100)call+=2;
            else if(cn>=10)call+=1;
            cn=1;
            c++;
        }
        else{
            cn++;
        }
    }
    call+=c*2;
    printf("%d\n",call);
    for(i=0;i<c;i++){
        printf("%c%d",wh[i],nc[i]);
    }
    return 0;
}