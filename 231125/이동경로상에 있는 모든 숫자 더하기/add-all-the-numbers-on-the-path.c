#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int li[102][102]={0},n,t,i,j,sum,x,y,dir=2;
    char od[100001];
    scanf("%d %d",&n,&t);
    x=n/2+1;
    y=n/2+1;
    scanf("%s",&od);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&li[i+1][j+1]);
        }
    }
    sum=li[x][y];


    for(i=0;i<t;i++){
        if(od[i]=='R'){
            if(dir==4)dir=1;
            else dir++;
        }
        else if(od[i]=='L'){
            if(dir==1)dir=4;
            else dir--;

        }
        else if(od[i]=='F'){//이동 방향에 -1이 아닐경우 이동 후 sum 추가
            if(dir==1){
                if(li[x][y-1]!=0){
                    y--;
                    sum+=li[x][y];
                }
            }
            else if(dir==2){
                if(li[x-1][y]!=0){
                    x--;
                    sum+=li[x][y];
                }

            }
            else if(dir==3){
                if(li[x][y+1]!=0){
                   y++;
                   sum+=li[x][y]; 
                }
            }
            else if(dir==4){
                if(li[x+1][y]!=0){
                    x++;
                    sum+=li[x][y];
                }
            }
        }
    }
    printf("%d",sum);
    return 0;
}