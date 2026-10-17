#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], t[c][r];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", (*(a + i) + j));
        }
    }

    // ট্রান্সপোজ করার লজিক (পয়েন্টার নোটেশন সহ)
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            *(*(t + j) + i) = *(*(a + i) + j);
        }
    }

    printf("Transpose of the matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d \t", *(*(t + i) + j));
        }
        printf("\n");
    }

    return 0;
}