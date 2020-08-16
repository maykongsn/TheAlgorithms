#include <stdio.h>
int main(){
    int v[30], i = 0;
    char c;
    do {
        scanf("%d%c", &v[i], &c);
        i++;
    } while(c != '\n');
    printf("[ ");
    for(int j = i-1; j >= 0; j--) {
        printf("%d ", v[j]);
    }
    printf("]\n");

    return 0;
}