#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3!=0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}
 
int main(){
    solve();
    return 0;
}