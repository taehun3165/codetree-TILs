#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int li[100][100]={'\0'},f=1,i,xn=1,yn=1,j,x=0,y=0,n,m,c,num=1;
    char ap[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            li[i][j]=-1;
        }
    }
    while(1){
        while(1){
            li[x][y]=num;
            if(li[x][y+yn]!=-1){// 다음 행의 위치에 0이 아닐때
                if(li[x+xn][y]!=-1){ // 다음 열의 위치가 0이 아닐때
                    f=0;
                    break;
                }
                else {
                    break;
                }
            }
            else{
                
                y+=yn;
                num++;
            }
        }
        if(f==0){
            break;
        }
        yn*=-1;
        while(1){
            li[x][y]=num;
            if(li[x+xn][y]!=-1){// 다음 행의 위치에 0이 아닐때
                if(li[x][y+yn]!=-1){ // 다음 열의 위치가 0이 아닐때
                    f=0;
                    break;
                }
                else {
                    break;
                }
            }
            else{
                
                x+=xn;
                num++;
            }
        }
        if(f==0)break;
        xn*=-1;
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c ",ap[li[i][j]%26-1]);
        }
        printf("\n");
    }
    return 0;
}