#include<stdio.h>

int findsum(int a,int b) {
    return a+b;
}
int main() {
    int x = 5, y = 10;
    int sum = findsum(x, y);
    printf("The sum of %d and %d is %d\n", x, y, sum);
    return 0;
}