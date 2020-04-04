/*
  Author: @yash_31
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
#define ll long long int
#define eb emplace_back
#define pb push_back
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
#define bpc __builtin_popcount

using namespace std; 
using namespace __gnu_pbds;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> gharKaSet;
//TTBDC

int main()
{
  fatafat
  int t,n;
  cin>>t;
  ll trace=0;
  ll arr[1000][1000];
  map<int,bool> mp;
  ll rr,rc;
  for(int tt=1;tt<=t;tt++){
    cin>>n;
    trace=0;rr=0;rc=0;
    for(int i=0;i<n;i++){
      mp.clear();
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
        if(i==j)trace+=arr[i][j];
        mp[arr[i][j]]=true;
      }
      if(mp.size()!=n){rr++;}
    }
    for(int i=0;i<n;i++){
      mp.clear();
      for(int j=0;j<n;j++){
        mp[arr[j][i]]=true;
      }
      if(mp.size()!=n)rc++;
    }
    cout<<"Case #"<<tt<<": "<<trace<<" "<<rr<<" "<<rc<<endl;
  }
  return 0;
}