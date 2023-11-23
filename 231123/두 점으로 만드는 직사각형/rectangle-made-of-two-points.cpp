#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int x[4],y[4],i,xmax=0,xmin=100,ymax=0,ymin=100,f1,f2;
    for(i=0;i<4;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<4;i++){
        if(x[i]<xmin)xmin=x[i];
        if(x[i]>xmax)xmax=x[i];
        if(y[i]<ymin)ymin=y[i];
        if(y[i]>ymax)ymax=y[i];
    }
    f1=xmax-xmin;
    f2=ymax-ymin;
    printf("%d",f1*f2);
    return 0;
}