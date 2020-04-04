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
  string str;
  string res;
  int open,y;
  for(int tt=1;tt<=t;tt++){
    cin>>str;
    res="";
    n=str.length();
    open=0;
    for(char x:str){
      y=x-'0';
      if(open<y){
        while(open!=y){
          res+="(";open++;
        }
      }
      else {
        while(open!=y){
          res+=")";open--;
        }
      }
      res+=x;
    }
    while(open!=0){res+=')';open--;}
    cout<<"Case #"<<tt<<": "<<res<<endl;
  }
  return 0;
}