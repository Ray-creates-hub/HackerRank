#include <stdio.h>

void printPattern(int n) {
    int size=2*n-1;

    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            int minDist = i;
            if (j < minDist) minDist = j;
            if (size - i - 1 < minDist) minDist = size - i - 1;
            if (size - j - 1 < minDist) minDist = size - j - 1;
            printf("%d ", n - minDist);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printPattern(n);
    return 0;
}
