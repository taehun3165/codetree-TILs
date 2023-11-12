#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,n,i,j=0,k=0,e=0,i1=0;
    scanf("%d %d %d",&a,&b,&n);
    for(i=1;n!=0;i*=a){
        j+=(n%10)*i;
        n=n/10;
    }
    i=1;
    while(1){
        if(j<b){
            i1+=j*i;
            break;
        }
        i1+=j%b*i;
        i*=10;
        j=j/b;
    }
    printf("%d\n",i1);
    return 0;
}