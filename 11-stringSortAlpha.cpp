#include<iostream>
using namespace std;
#include <algorithm>
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string *str = new string[n];
    for(int i=0;i<n;i++){
        getline(cin,str[i]);
    }
    sort(str,str+n);
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    delete []str;
    return 0;
}

// #include<iostream>
// using namespace std;
// #include<vector>
// #include <algorithm>
// vector<string> str;
// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();
//     for(int i=0;i<n;i++){
//         string in;
//             getline(cin,in);
//         str.push_back(in);
//     }
//     sort(str.begin(),str.end());
//     // for(int i=0;i<str.size();i++){
//     //     cout<<str[i]<<endl;
//     // }
//     for( size_t i=0;i<str.size();i++){
//         cout<<str[i]<<endl;
//     }
// }