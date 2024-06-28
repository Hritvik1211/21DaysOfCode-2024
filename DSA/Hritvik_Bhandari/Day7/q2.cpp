#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ff first 
#define ss second
#define ppb pop_back
#define all(a) a.begin(),a.end()
#define cin(v) for(auto &i:v){cin>>i;}
#define cout(v) for(auto &i:v){cout<<i<<" ";}cout<<nl;
#define coutpr(v) for(auto &i:v){cout<<i.ff<<" "<<i.ss<<nl;}cout<<nl;
#define coutmp(v) for(auto &x:v){cout<<x.ff<<" "<<x.ss<<nl;}cout<<nl;

signed main() {
    string s;
    cin >> s;
    int k = count(s.begin(), s.end(), 'x');
    
    int n = s.size();
    
    int fronty = 0, frontyy = 0, backyy = 0;
    int frontx = k, frontxx = k, backxx = k;
    int minn = LLONG_MAX; 
    int miny = LLONG_MAX;
    int minx = LLONG_MAX;
    
   
    for (int i = 0; i < n; i++) {
        if (s[i] == 'y') {
            frontyy++;
        } else {
            frontxx--;
        }
        miny = min(miny, max(frontyy, frontxx));
    }
    for (int j = n - 1; j >= 0; j--) {
        if (s[j] == 'y') {
            backyy++;
        } else {
            backxx--;
        }
        minx = min(minx, max(backyy, backxx));
    }
    
    int final_result = min(minx, miny);
    
    
    fronty = 0;
    frontx = k;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'y') {
            fronty++;
        } else {
            frontx--;
        }
        int backy = fronty;
        int backx = frontx;
        for (int j = n - 1; j > i; j--) {
            if (s[j] == 'y') {
                backy++;
            } else {
                backx--;
            }
            minn = min(minn, max(backy, backx));
        }
    }

    
    cout << min(minn, final_result) << endl;

    return 0;
}
signed main() {
    string s;
    cin >> s;
    int k = count(s.begin(), s.end(), 'x');
    
    int n = s.size();
    
    int fronty = 0, frontyy = 0, backyy = 0;
    int frontx = k, frontxx = k, backxx = k;
    int minn = LLONG_MAX; 
    int miny = LLONG_MAX;
    int minx = LLONG_MAX;
    
   
    for (int i = 0; i < n; i++) {
        if (s[i] == 'y') {
            frontyy++;
        } else {
            frontxx--;
        }
        miny = min(miny, max(frontyy, frontxx));
    }
    for (int j = n - 1; j >= 0; j--) {
        if (s[j] == 'y') {
            backyy++;
        } else {
            backxx--;
        }
        minx = min(minx, max(backyy, backxx));
    }
    
    int final_result = min(minx, miny);
    
    
    fronty = 0;
    frontx = k;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'y') {
            fronty++;
        } else {
            frontx--;
        }
        int backy = fronty;
        int backx = frontx;
        for (int j = n - 1; j > i; j--) {
            if (s[j] == 'y') {
                backy++;
            } else {
                backx--;
            }
            minn = min(minn, max(backy, backx));
        }
    }  
    cout << min(minn, final_result) << endl;

    return 0;
}
