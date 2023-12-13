#include <stdio.h>
#include <string.h>

int main() {
    int n, h = 0, co = 0;
    char c[23][23], c1;
    scanf("%d", &n);

    // 비워진 버퍼를 정리하기 위해 추가된 코드
    while (getchar() != '\n');

    for (int i = 0; i < n; i++) {
        scanf("%s ", c[i]);
        h += strlen(c[i]);
    }

    scanf("%c ", &c1);
    for (int i = 0; i < n; i++) {
        if (c[i][0] == c1) co++;
    }

    printf("%.0f %.0f.00", (float)co, (float)h / n);
    return 0;
}