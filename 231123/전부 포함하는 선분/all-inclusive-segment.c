#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,j,n,x1[100],x2[100],min=1000,hap,xmax=0,xmin=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x1[i],&x2[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=i){
                if(xmin>x1[j])xmin=x1[j];
                if(xmax<x2[j])xmax=x2[j];
            }
        }
        if(min>xmax-xmin)min=xmax-xmin;
        xmax=0;
        xmin=1000;
    }
    printf("%d",min);
    return 0;
}