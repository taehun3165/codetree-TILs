#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,i,max=0,h,x;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        x=i;
        h=0;
        while(1){
            if(x==0)break;
            h+=x%10;
            x=x/10;
        }
        if(max<h)max=h;
    }
    printf("%d",max);
    return 0;
}