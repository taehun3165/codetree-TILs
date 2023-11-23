#include <stdio.h>



int main() {
    // 여기에 코드를 작성해주세요.
    int i,j,n,li[200000]={'\0'},t,min=1000000000;
    scanf("%d",&n);
    for(i=0;i<2*n;i++){
        scanf("%d",&li[i]);
    }
    for(i=0;i<2*n-1;i++){
        for(j=i+1;j<n*2;j++){
            if(li[i]>li[j]){
                t=li[i];
                li[i]=li[j];
                li[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        if(li[i]>li[i+n]){
            if(li[i]-li[i+n]<min)min=li[i]-li[i+n];
        }
        else{
            if(li[i+n]-li[i]<min)min=li[i+n]-li[i];
        }
    }
    printf("%d",min);

    return 0;
}