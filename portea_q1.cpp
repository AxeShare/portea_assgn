#include<bits/stdc++.h>
using namespace std;

vector<int> find_max(int n, vector<int> A){
    vector<int> res(3,0);
    int max_first, max_second, max_third;
    max_first = max_second = max_third = INT_MIN;
    for(int i = 0; i < n; i++){

        if (A[i] > max_first){
            max_third = max_second;
            max_second = max_first;
            max_first = A[i];
        }
 
        else if (A[i] > max_second){
            max_third = max_second;
            max_second = A[i];
        }
 
        else if (A[i] > max_third)
            max_third = A[i];
    }
    res[0] = max_first;
    res[1] = max_second;
    res[2] = max_third;
    return res;
}

vector<int> find_min(int n, vector<int> A){
    vector<int> res(3,0);
    int min_first, min_second, min_third;
    min_first = min_second = min_third = INT_MAX;
    for(int i = 0; i < n; i++){

        if (A[i] < min_first){
            min_third = min_second;
            min_second = min_first;
            min_first = A[i];
        }
 
        else if (A[i] < min_second){
            min_third = min_second;
            min_second = A[i];
        }
 
        else if (A[i] < min_third)
            min_third = A[i];
    }
    res[0] = min_first;
    res[1] = min_second;
    res[2] = min_third;
    return res;
}

vector<int> maxProdtriplet(int n, vector<int> A){
    vector<int> G = find_max(n,A);
    vector<int> L = find_min(n,A);

    int p1 = G[0]*G[1]*G[2];
    int p2 = G[0]*L[0]*L[1];
    
    if(p1>p2){
        return G;
    }
    else{
        L[2] = G[0];
        return L;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n,0);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    
    vector<int> ans = maxProdtriplet(n,A);
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    return 0;
 
}