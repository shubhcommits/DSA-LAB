#include<iostream>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>key;
    for(int i=0;i<n;i++){
        if(A[i]==key){
            cout<<i;
            break;
        }
        else if(A[i]==(n-1)&&A[i]!=key){
            cout<<"-1";
        }
    }
    return 0;
}