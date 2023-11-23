#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int x[4],y[4],i,xmin=100000000,xmax=0,ymin=1000000,ymax=0,f;
    for(i=0;i<4;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<4;i++){
        if(x[i]<xmin)xmin=x[i];
        if(x[i]>xmax)xmax=x[i];
        if(y[i]<ymin)ymin=y[i];
        if(y[i]>ymax)ymax=y[i];
    }
    if(xmax-xmin>ymax-ymin)f=xmax-xmin;
    else f=ymax-ymin;
    printf("%d",f*f);
    return 0;
}