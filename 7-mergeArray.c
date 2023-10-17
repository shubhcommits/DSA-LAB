#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int m;
    scanf("%d",&m);
    int B[m];
    for(int i=0;i<m;i++){
        scanf("%d",&B[i]);
    }
    int rs=m+n;
    int C[rs];
    for(int i=0;i<rs;i++){
        if(i<n){
        C[i]=A[i];
        }
        else{
            C[i]=B[i-n];
        }
    }
    for(int i=0;i<rs;i++){
        printf("%d ",C[i]);
    }
}