#include<bits/stdc++.h>
using namespace std;
 
int main(){
long long age;
cin>>age;
long long years=age/365;
long long months=(age%365)/30;
long long days=((age%365)%30);
 
cout<<years<<" years"<<endl;
cout<<months<<" months"<<endl;
cout<<days<<" days"<<endl;
 
}
