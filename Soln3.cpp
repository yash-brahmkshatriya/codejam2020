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
#define mod8 100000000

using namespace std; 
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update> gharKaSet;
 
const int maxlimit=1e5+2;
const ll inf=1e12;
//TTBDC

int main()
{
  fatafat
  int t,n;
  cin>>t;
  int ans;
  int x,y;
  for(int tt=1;tt<=t;tt++){
    cin>>n;
    vector<pair<pair<int,int>,int> > events;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      events.eb(mkpr(mkpr(x,y),i));
    }
    string res(n,'-');
    sort(whole(events));
    // for(auto xx:events){
    //   cout<<xx.ft.ft<<" "<<xx.ft.sd<<" "<<xx.sd<<endl;
    // }
    int j=0,c=0;
    for(int i=0;i<n;i++){
      if(events[i].ft.ft>=j){
        j=events[i].ft.sd;
        res[events[i].sd]='J';
      }
      else if(events[i].ft.ft>=c){
        c=events[i].ft.sd;
        res[events[i].sd]='C';
      }
      else {
        res="IMPOSSIBLE";break;
      }
    }
    cout<<"Case #"<<tt<<": "<<res<<endl;
  }
  return 0;
}