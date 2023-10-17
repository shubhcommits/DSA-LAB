#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int A[n];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            k=i;
        while(A[k+1]<A[k]&&k>=0){
            temp=A[k];
            A[k]=A[k+1];
            A[k+1]=temp;
            k--;
        }
        }
        for(int j=0;j<n;j++){
            
            printf("%d ",A[j]);
        }
        printf("\n");
    }
    return 0;
}