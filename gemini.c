#include <stdio.h>

int main() {
    int i, j, max_len = 0, current_len, n;
    scanf("%d %d", &i, &j);

    for (int k = i; k <= j; k++) {
        current_len = 1;
        n = k;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = 3 * n + 1;
            }
            current_len++;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("%d %d %d\n", i, j, max_len);
    return 0;
}
