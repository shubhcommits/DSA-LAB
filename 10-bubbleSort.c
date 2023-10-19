#include<stdio.h>
int main(){
    int temp,n,j;
    // enter length
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    // sorting
    for(int i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            printf("%d  ",A[j]);
        }
        for(j=n-i-1;j<n;j++){
        printf("%d  ",A[j]);
        }
        printf("\n");
    }
}