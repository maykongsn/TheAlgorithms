#include <stdio.h>

int abss(int a){
    return (a<0)?-a:a;
}

int main(){

    int A[10][10];   
    
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            A[i][j] = (i+j)*i;

    int m = A[0][0];
    int x = 0;

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(A[i][j]*A[i][j]>m){
                m = A[i][j];
                x = abss(A[i][j]);
            }
    return 0;
}