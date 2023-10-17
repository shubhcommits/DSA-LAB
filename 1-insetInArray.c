#include<stdio.h>
// #include<conio.h>
int main(){
    int A[10];
    int n;  
    scanf("%d",&n);  // size of array
    // cin>>n;
    for(int i=0;i<n;i++){
        // cin<<A[i];
        scanf("%d",&A[i]);  // input array numbers
    }
    int ne;  // new element
    scanf("%d",&ne);
    for(int i=n;i>0;i--){
        A[i]=A[i-1];
    }
    A[0]=ne;
    for(int j=0;j<n+1;j++){
        // cout<<A[j];
        printf("%d ",A[j]);
    }
}