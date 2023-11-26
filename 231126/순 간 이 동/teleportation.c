#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int min=1000,i,a,b,x,y,j,c=0;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    if(min>a-x+b-y&& a-x>0 && b-y>0)min=a-x+b-y;
    if(min>b-x+a-y&& b-x>0 && a-y>0)min=b-x+a-y;
    if(min>x-a+y-b&& x-a>0 && y-b>0)min=x-a+y-b;
    if(min>x-b+y-a&& x-b>0 && x-b>0)min=x-b+y-a;

    if(min>a-y+x-b&& a-y>0 && x-b>0)min=a-x+y-b;
    if(min>b-y+x-a&& b-y>0 && x-a>0)min=b-x+y-a;
    if(min>y-a+b-x&& y-a>0 && b-x>0)min=x-a+b-y;
    if(min>y-b+a-x&& y-b>0 && a-x>0)min=y-a+b-x;

    if(min>a-b&&a-b>0)min=a-b;
    if(min>b-a&&b-a>0)min=b-a;
    printf("%d",min);
    return 0;
}