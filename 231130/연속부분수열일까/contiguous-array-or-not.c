#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c=0,d,e,i,j;
    int* n1='\0';
    int* n2='\0';
    scanf("%d %d",&a,&b);
    n1=(int*)malloc(sizeof(int)*a);
    n2=(int*)malloc(sizeof(int)*b);
    for(i=0;i<a;i++){
        scanf("%d",&n1[i]);
    }
    for(i=0;i<b;i++){
        scanf("%d",&n2[i]);
    }
    for(i=0;i<a;i++){
        if(n2[0]==n1[i]){
            for(j=i;j<a;j++){
                if(n1[j]==n2[j-i]){
                    c++;
                }
                else{
                    if(c==b){
                        break;
                    }
                    c=0;
                    break;
                }
            }
        }
        if(c==b){
        break;
        }
    }
    if(c==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}