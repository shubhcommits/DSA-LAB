#include<iostream>
using namespace std;
void reverseArray(int A[],int size){
    int *start=A;  // this pointing to the first element
    int *end=A+size-1; // this pointing to the lst element
    while(start<end){
        int temp;
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
    int main(){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){  // taking input of array
            cin>>A[i];
        }
        reverseArray(A,n);
        for(int k=0;k<n;k++){
            cout<<A[k]<<" ";
        }
}