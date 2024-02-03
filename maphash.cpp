#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the size of array you want ";
cin >>n;
int arr[n];
cout<<"enter the elements of array ";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

map <int,int> mpp;

for (int i = 0; i < n; i++)
{
    mpp[arr[i]]++;
}

cout<<"enter number you want to search ";
int key;
cin>>key;
cout<<"the "<<key<<" is repeated "<<mpp[key]<<" times"<<endl;

cout<<"here is the whole map for you "<<endl;

for(auto it : mpp){
    cout<<it.first<<"-->"<<it.second<<endl;

}




return 0;
}