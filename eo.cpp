#include<iostream>
#include<list>
using namespace std;
bool even(int x){
    return(x%2==0);
}
int main(){
    int n;
    cout<<"size of list"<<endl;
    cin>>n;
    list<int>l1;
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        l1.push_back(key);
    }
    cout<<"before removing "<<endl;
    for(auto it=l1.begin();it!= l1.end();++it){
        cout<<*it<<"  ";
    }
    cout<<endl;
    l1.remove_if(even);
    cout<<"after removing all even no"<<endl;
    for(auto it=l1.begin();it!= l1.end();++it){
        cout<<*it<<"  ";
    }
}
