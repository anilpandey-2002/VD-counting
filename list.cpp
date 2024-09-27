#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n;
    cout<<"enter te size of list "<<endl;
    cin>>n;
    list<int>l1;
    list<int>l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(5);
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        l1.push_back(key);
 
    }
    cout<<" list before swapping  "<< endl;
    cout<<"l1:-   ";
    for(auto it = l1.begin() ; it!= l1.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"l2:- ";
    for(auto it = l2.begin() ; it!= l2.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
     l1.swap(l2);
    cout<<" list after merging "<< endl;
    cout<<"l1:- ";
    for(auto it = l1.begin() ; it!= l1.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"l2:- ";
    for(auto it = l2.begin() ; it!= l2.end(); ++it){
        cout<<*it<<" ";
    }
    
}
