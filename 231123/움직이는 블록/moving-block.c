#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,n,li[10000]={'\0'},t,f=0,c=0,x=0,mean=0,hap=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&li[i]);
        hap+=li[i];
    }
    mean=hap/n;
    for(i=0;i<n;i++){
        if(li[i]>mean){
            c+=li[i]-mean;
        }
        else if(li[i]<mean){
            c+=mean-li[i];
        }
    }
    
    printf("%d",c/2);
    return 0;
}