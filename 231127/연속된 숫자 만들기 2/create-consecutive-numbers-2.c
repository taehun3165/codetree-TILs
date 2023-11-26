#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,n,t;
    scanf("%d %d %d",&a,&b,&c);

    if(a+1==b&&b+1==c)n=0;
    else if(a-b==2||b-a==2||b-c==2||c-b==2)n=1;
    else n=2;
    printf("%d",n);
    return 0;
}