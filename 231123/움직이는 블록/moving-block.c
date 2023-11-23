#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,n,li[10000]={'\0'},min=0,max=0,t,c=0,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&li[i]);
    }
    while(1){
        for(i=0;i<n-1;i++){
            if(li[i]!=li[i+1])break;
            else if(i==n-2){
                x=1;
            }
        }
        if(x==1)break;
        for(i=0;i<n;i++){
            if(li[i]>li[max])max=i;
            if(li[i]<li[min])min=i;
        }
        li[min]++;
        li[max]--;


        c++;
    }
    printf("%d",c);
    return 0;
}