#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int *p;
    int sum;
    int i;
    char result[22];
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    sprintf(result,"%d",sum);
    printf("%s%c",result+1,result[0]);
    free(p);
    return 0;
}