#include<bits/stdc++.h>
using namespace std;
 
int main(){
double N;
cin>>N;
 
int INT=N;
float m=N-INT;
 
if(N == (int)N){
    cout<<"int "<<N<<endl;
}else{
    cout<<"float "<<INT<<" "<<m<<endl;
}
}
