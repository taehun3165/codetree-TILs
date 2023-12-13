#include <stdio.h>
#include <string.h>

int main() {
    int n, h = 0, co = 0;
    char c[23][23], c1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s ", c[i]);
    }

    scanf("%c ", &c1);
    for (int i = 0; i < n; i++) {
        if (c[i][0] == c1){ 
            co++;
            h += strlen(c[i]);
        }
    }

    printf("%d %.2f", co, (float)h / co);
    return 0;
}