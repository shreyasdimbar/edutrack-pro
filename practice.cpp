#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                v.push_back(i);
            }
        }
        int j = 0;
        for(int i=1;i<v.size();i++){
            if( v[i]-v[j++] > 3 ){
                cout << ""
            }
        }

    }
}