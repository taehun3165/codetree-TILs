#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=0,b=0,f=0,al[1000000]={'\0'},bl[1000000]={'\0'},i,j,n,m,v,t,c=1,x[1000000]={'\0'};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d %d",&v,&t);
        for(j=0;j<t;j++){
            a+=v;
            al[f]=a;
            f++;
        }
    }
    f=0;
    for(i=0;i<m;i++){
        scanf("%d %d",&v,&t);
        for(j=0;j<t;j++){
            b+=v;
            bl[f]=b;
            f++;
        }
    }
    for(i=0;i<f;i++){
        if(al[i]>bl[i]){
            x[i]=0;
        }
        else if(al[i]<bl[i]){
            x[i]=1;
        }
        else if(al[i]==bl[i]){
            x[i]=3;
        }
    }
    for(i=0;i<f-1;i++){
        if(x[i]!=x[i+1])c++;
    }
    printf("%d",c);
    return 0;
}