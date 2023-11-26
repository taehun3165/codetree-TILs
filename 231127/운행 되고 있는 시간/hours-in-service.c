#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a[101],b[101],i,j,max=0,amin=1000,bmax=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            amin=1000,bmax=0;
            if(i!=j){
                if(amin>a[j])amin=a[j];
                if(bmax<b[j])bmax=b[j];
            }
            if(bmax-amin>max)max=bmax-amin;
        }
    }
    printf("%d",max);
    return 0;
}