#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int li[101][101]={'\0'},f=1,i,xn=1,yn=1,j,x=0,y=0,n,m,c,num=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            li[i][j]=-1;
        }
    }
    x=n/2;
    y=n/2;
    while(1){
        
        while(1){
            li[x][y]=num;
            if(num==n*n){
                f=0;
                break;
            }
            if(li[x][y+yn]==-1){
                y+=yn;
                num++;
                break;
            }
            
            else{
                
                x+=xn;
                num++;
            }
        }
        if(f==0)break;
        xn*=-1;

        while(1){
            li[x][y]=num;
            if(num==n*n){
                f=0;
                break;
            }
            if(li[x+xn][y]==-1){
                x+=xn;
                num++;
                break;
            }
            
            else{
                
                y+=yn;
                num++;
            }
        }
        if(f==0)break;
        yn*=-1;
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",li[i][j]);
        }
        printf("\n");
    }
    return 0;
}