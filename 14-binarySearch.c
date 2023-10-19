#include <stdio.h>
int main() {
    int n,key;
    int k=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&key);
    int l=0;
    int h=n-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(A[mid]==key){
            k++;
            printf("%d",k);
            printf("\n");
            printf("%d",mid+1);
            break;
        }
        else if(A[mid]>key){
            h=mid-1;
            k++;
        }
        else if(A[mid]<key){
            l=mid+1;
            k++;
        }
    }
    if(l>h&&A[mid]!=key){
        printf("%d",k);
            printf("\n");
        printf("%d",-1);
    }
    return 0;
}
