#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int n,a;
    for(int i=0;i<t;i++){
        cin>>n>>a;
        int unInf=n-a;
        cout<<min(a,unInf)<<endl;
    }

    return 0;
}