#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,j,n,m,li[100]={'\0'},c=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&li[i]);
    }
    
    for(i=0;i<n;i++){
        if(li[i]==1){
            c++;
            for(j=i;j<=i+m*2+1;j++){
                if(j==n)break;
                li[j]=0;
            }
        }
    }
    printf("%d",c);
    return 0;
}