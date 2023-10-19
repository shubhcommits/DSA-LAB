#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    public:
    Array(int size){
        this->size=size;
        A=new int[size];
        length=0;
    }
    void Set(int i,int x);
    Array* removeDub();
    bool isDuplicate(int key,int k);
    void Display();
};
bool Array::isDuplicate(int key,int k){
    for(int i=0;i<k;i++){
        if(A[i]==key){
            return true;
        }
    }
    return false;
}
void Array::Set(int i,int x){
    A[i]=x;
    length++;
}
Array* Array::removeDub(){
    int k=0;
    Array* arr3=new Array(length);
    for(int i=0;i<length;i++){
        if(!isDuplicate(A[i],k)){
            arr3->A[k++]=A[i];
        }
    }
    arr3->length=k;
    return arr3;
}
void Array::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int size,x;
    cin>>size;
    Array arr(size);
    for(int i=0;i<size;i++){
        cin>>x;
        arr.Set(i,x);
    }
        Array *arr3;
        arr3 = arr.removeDub();
        arr3->Display();
}