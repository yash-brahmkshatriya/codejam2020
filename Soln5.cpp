/*
  Author: @yash_31
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
#define ll long long int
#define eb emplace_back
#define fatafat ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define ft first
#define sd second
#define vpi vector<pair<int,int> >
#define vpl vector<pair<ll,ll> >
#define mkpr make_pair
#define todec() to_ulong()
#define toldec() to_ullong()
#define deb(x) std::cout<<#x<<":"<<x<<endl;
#define whole(x) (x).begin(),(x).end()
#define revwhole(x) (x).rbegin(),(x).rend()
#define endl "\n"
#define fbo find_by_order
#define ook order_of_key
 
using namespace std; 
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> gharKaSet;
 
const int maxlimit=1e5+2;
const ll inf=1e12;

bool isrsafe[70][70], iscsafe[70][70], done;
int matrix[70][70], n, k, tt;

void genAns(int r, int c, int m) {
    if (r == n && c == n + 1 && m == k && !done) {
        done = true;
        cout << "Case #" << tt << ": " << "POSSIBLE\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    }
    else if (r > n) {return;}
    else if (c > n) {genAns(r + 1, 1, m);}
    for (int i = 1; i <= n && !done; ++i) {
        if (!isrsafe[r][i] && !iscsafe[c][i]) {
            isrsafe[r][i] = iscsafe[c][i] = true;
            if (r == c) {m += i;}
            matrix[r][c] = i;
            genAns(r, c + 1, m);
            isrsafe[r][i] = iscsafe[c][i] = false;
            if (r == c) {m -= i;}
            matrix[r][c] = 0;
        }
    }
}

int main()
{
    fatafat
    int t;
    cin>>t;
    for (tt = 1; tt <= t; tt++) {
        cin>>n>>k;
        genAns(1, 1, 0);
        if (!done) {
            cout << "Case #" << tt << ": " << "IMPOSSIBLE\n";
        }
        done = false;
    }
    return 0;
}