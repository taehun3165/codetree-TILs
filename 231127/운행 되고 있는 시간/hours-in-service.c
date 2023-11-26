#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a[101],b[101],i,j,l,hap,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        hap=0;
        int x[1001]={0};
        for(j=0;j<n;j++){
            if(i!=j){
                for(l=a[j];l<b[j];l++){
                    x[l]=1;
                }
            }
        }
        for(j=0;j<1001;j++){
            hap+=x[j];
        }
        if(max<hap)max=hap;
    }
    printf("%d",max);
    return 0;
}