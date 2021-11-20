#include<bits/stdc++.h>
using namespace std;

//O(n) time, O(n) space solution for finding first repeating pattern of length 3 (can be modified for length k)

void findRepeatPattern(int n, string s){
    set<string> S;
    string ans;
    bool found = false;
    for(int i=0; i<=n-3; i++){
        string patt = s.substr(i,3);
        if(S.find(patt)!=S.end()){
            ans = patt;
            found = true;
            break;
        }
        S.insert(patt);
    }
    if(!found){
        cout << "No Pattern Found";
    }
    else{
        cout << "Pattern found: " << ans << endl;
    }
}

int main(){
    string s;
    cin >> s;
    int n = s.length();
    findRepeatPattern(n,s);
    return 0;
 
}
