#include<iostream>
using namespace std;
void subArray(int A[],int n,int res){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+A[j];
            if(sum==res){
                cout<<i<<" "<<j;
            }
            if(sum>res){
                break;
            }
        }
    }
}
int main() {
    int n,res;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>res;
    subArray(A,n,res);
    return 0;
}