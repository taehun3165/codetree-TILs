#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char m[100][100]={"apple", "banana", "grape", "blueberry", "orange"},a;
    int i,n=0;
    scanf("%c ",&a);
    for(i=0;i<5;i++){
        if(m[i][3]==a||m[i][2]==a){
            n++;
            printf("%s\n",m[i]);
        }
    }
    printf("%d",n);
    return 0;
}