#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,l,c=0;
    char w[11][21]={'\0'},h;
    for(i=0;i<10;i++){
        scanf("%s",w[i]);
    }
    scanf(" %c",&h);
    for(i=0;i<10;i++){
        for(l=0;l<20;l++){
            if(w[i][l+1]=='\0'){
                if(w[i][l]==h){
                    printf("%s\n",w[i]);
                    c++;
                }
                break;
            }
        }
    }
    if(c==0)printf("None");
    return 0;
}