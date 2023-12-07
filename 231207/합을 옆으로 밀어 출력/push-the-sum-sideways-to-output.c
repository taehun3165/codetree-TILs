#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int h=0,i,n,a,hap[4]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        h+=a;
    }
    for(i=0;i<4;i++){
        hap[3-i]=h%10;
        h=h/10;
    }
    for(i=1;i<4;i++){
        printf("%d",hap[i]);
    }
    printf("%d",hap[0]);
    return 0;
}