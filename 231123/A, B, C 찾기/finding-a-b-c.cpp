#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int i,li[7]={'\0'},a=1000000000,b=1000000000,c=1000000000,t;
    for(i=0;i<7;i++){
        scanf("%d",&li[i]);
    }
    for(i=0;i<7;i++){
        if(li[i]<a){
            t=li[i];
            li[i]=a;
            a=t;
        }
    }
    for(i=0;i<7;i++){
        if(li[i]<b){
            t=li[i];
            li[i]=b;
            b=t;
        }
    }
    for(i=0;i<7;i++){
        if(li[i]==a+b){
            li[i]=1000000000;
        }
    }
    for(i=0;i<7;i++){
        if(li[i]<c){
            t=li[i];
            li[i]=c;
            c=t;
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}