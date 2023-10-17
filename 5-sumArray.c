#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[3];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}