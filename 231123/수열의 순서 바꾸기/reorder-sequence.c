#include <stdio.h>


int main() {
    // 여기에 코드를 작성해주세요.
    int n,li[100]={'\0'},i,t,m,x=1,c=0,f;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&li[i]);
    }
    if(n==1)printf("0");
    if(n==2){
        if(li[0]>li[1]){
            t=li[0];
            li[0]=li[1];
            li[1]=t;
        }
    }
    else{
        while(1){
            for(i=0;i<n-1;i++){
                if(li[i]+1!=li[i+1])break;
                else if (i==n-2){
                    x=0;
                    break;
                }
            }
            if(x==0)break;


            for(i=1;i<n;i++){
                if(li[0]>li[i]){
                    m=i;
                    f=i;
                }
            }
            for(i=m;i<n-1;i++){
                if(li[i]+1!=li[1+i]){
                    f=i;

                }
            }
            t=li[0];
            for(i=1;i<=f;i++){
                li[i-1]=li[i];
            }
            li[f]=t;


            c++;
            
        }
    }
    printf("%d",c);
    return 0;
}