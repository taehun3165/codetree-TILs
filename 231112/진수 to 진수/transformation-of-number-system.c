#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,n,i,j=0,k=0,e=0,i1[10000];
    scanf("%d %d %d",&a,&b,&n);
    for(i=1;n!=0;i*=a){
        j+=(n%10)*i;
        n=n/10;
    }

    i=0;
    while(1){
        if(j<b){
            i1[i]=j;
            break;
        }
        i1[i]=j%b;
        i++;
        j=j/b;
    }
    for(int x=i;x>=0;x--){
        printf("%d",i1[x]);
    }
    return 0;
}