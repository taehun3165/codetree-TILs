#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,j,n,a[101],b[101],c1[2]={0},max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[j]);
    }
    for(i=0;i<n;i++){
        if(a[i]==1&&b[i]==2||a[i]==2&&b[i]==3||a[i]==3&&b[i]==1)c1[0]++;
        if(a[i]==2&&b[i]==1||a[i]==3&&b[i]==2||a[i]==1&&b[i]==3)c1[1]++;
    }
    for(i=0;i<2;i++){
        if(max<c1[i])max=c1[i];
    }
    printf("%d",max);
    return 0;
}