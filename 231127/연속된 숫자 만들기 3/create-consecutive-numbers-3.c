#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c=0,n=0,t;
    scanf("%d %d %d",&a,&b,&c);
    while(1){
        if(a+1==b&&b+1==c)break;
        else if(c-b>b-a){
            a=c-1;
            t=a;
            a=b;
            b=t;
        }
        else{
            c=a+1;
            t=b;
            b=c;
            c=t;
        }
        n++;
    }
    printf("%d",n);
    return 0;
}