#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int min=1000,a[101]={0},b[101]={0},n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=i){
                if(a[i]>a[j]&&b[i]>b[j]){
                    if(min>(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])){
                        min=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
                        }
                }
                else if(a[i]>a[j]&&b[i]<b[j]){
                    if(min>(a[i]-a[j])*(a[i]-a[j])+(b[j]-b[i])*(b[j]-b[i])){
                    min=(a[i]-a[j])*(a[i]-a[j])+(b[j]-b[i])*(b[j]-b[i]);
                    }
                }
                else if(a[i]<a[j]&&b[i]>b[j]){
                    if(min>(a[j]-a[i])*(a[j]-a[i])+(b[i]-b[j])*(b[i]-b[j])){
                    min=(a[j]-a[i])*(a[j]-a[i])+(b[i]-b[j])*(b[i]-b[j]);
                    }
                }
                else if(a[i]<a[j]&&b[i]<b[j]){
                    if (min>(a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i])){
                    min=(a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]);
                    }
                }
            }
        }
        
    }
    printf("%d",min);
    return 0;
}