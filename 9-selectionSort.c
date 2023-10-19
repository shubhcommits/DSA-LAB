#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,j,k,temp;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        // printf("%d ",A[i]);
        // // printf("\n");
    }
        for(int i=0;i<n;i++){
          for(int m=0;m<n;m++){
           printf("%d ",A[m]);
        }
        printf("\n");
        for(j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
            
        }
        temp=A[i];
        A[i]=A[k];
        A[k]=temp;

    }
}
