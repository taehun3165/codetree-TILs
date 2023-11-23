#include <stdio.h>




int main() {
    // 여기에 코드를 작성해주세요.
    int i,j,n,li[1000]={'\0'},m,even=0,odd=0,h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        if(m%2==0)even++;
        else odd++;
    }
    while(1){
        if(h%2==0){
            if(even>0){
                even--;
                h++;
            }
            else if(odd>=2){
                odd-=2;
                h++;
            }
            else{
                if(even>0||odd>0)h--;
                break;
            }
        }
        else{
            if(odd>0){
                odd--;
                h++;
            }
            else{
                break;
            }
        }
    }
    printf("%d",h);
    return 0;
}