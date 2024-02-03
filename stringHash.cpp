#include <iostream>
using namespace std;
int main(){
string s;
cout<<"enter the string ";
cin>>s;
int hash[26]={0};
for (int i = 0; i < s.size(); i++)
{
    hash[s[i]-'a'+1]+=1;
}

cout<<hash[1];

return 0;
}