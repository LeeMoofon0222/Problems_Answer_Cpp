#include <stdio.h>

int main() {
    int a[1000], b[1000], N, i, j, k;
    while (scanf("%d", &N), N) {
        while (scanf("%d", &b[0]), b[0]) {
            for (i = 1; i < N; i++) {
                scanf("%d", &b[i]);
            }
            for (i = 1, j = 0, k = 0; i <= N; i++, j++) {
                a[j] = i;
                //printf("%d %d\n",a[j],b[k]);
                while (a[j] == b[k]) {
                    j--;
                    k++;
                    if (j == -1) break;
                }
            }
            if (k == N) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
        printf("\n");
    }
    return 0;
}
