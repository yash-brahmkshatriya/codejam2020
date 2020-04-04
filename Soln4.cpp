/*
  Author: @noob2831
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

int comp(int x){
  if(x==0)return 1;
  else return 0;
}

bool isValid(int f1,int r1,int f2,int r2){
  if((f1==r2 && f2==r1) || (f1==comp(r2) && f2==comp(r1)))return false;
  else return true;
}

int whatx(int f1,int b1,int f2,int b2,int f11,int b11,int f21,int b21){
  if(f1==f11 && f2==f21 && b1==b11 && b2==b21)return 0;//no change
  if(f1==comp(f11) && f2==comp(f21) && b1==comp(b11) && b2==comp(b21))return 1;//comp
  if(f1==b11 && f2==b21 && b1==f11 && b2==f21)return 2;//rev
  return 3;//rev+comp
}

void change(vector<int> &v,int w){
  if(w==1){
    for(int i=0;i<v.size();i++){
      if(v[i]!=-1){v[i]=comp(v[i]);}
    }
  }
  else if(w==2){
    reverse(whole(v));
  }
  else {
    reverse(whole(v));
    for(int i=0;i<v.size();i++){
      if(v[i]!=-1){v[i]=comp(v[i]);}
    }
  }
}

int main()
{
  int t,nbits;
  cin>>t>>nbits;
  int bitsgot=0,bit;
  int f1,f2,b1,b2;
  int f11,f21,b11,b21;
  int x=1,y=nbits;
  bool changed=false;
  int q=3;
  bool pairfnd;
  int secx,secy;
  int bitsfnd=0;
  vector<int> res(nbits,-1);
  for(int tt=1;tt<=t;tt++){
    q=5;
    bitsfnd=0;
    pairfnd=false;
    f2=b2=-1;
    x=1;y=nbits;
    cout<<x<<endl;
    cin>>f1;
    cout<<y<<endl;
    cin>>b1;
    res[0]=f1;res[nbits-1]=b1;
    x++;y--;
    cout<<x<<endl;
    cin>>f2;
    cout<<y<<endl;
    cin>>b2;
    res[x-1]=f2;res[y-1]=b2;
    secx=x;secy=y;
    bitsfnd=4;
    while(q%10!=1){
      if(bitsfnd==nbits)break;
      if(!isValid(f1,b1,f2,b2)){
        q+=2;x++;y--;
        cout<<x<<endl;
        cin>>f2;
        cout<<y<<endl;
        cin>>b2;
        res[x-1]=f2;
        res[y-1]=b2;
        bitsfnd+=2;
      }
      else {
        secx=x;secy=y;x++;y--;
        pairfnd=true;break;
      }
    }
    for(q=q;q<=150;){
      if(x>y || bitsfnd==nbits)break;
      if(q%10==1){
        cout<<1<<endl;
        cin>>f11;
        q++;
        cout<<nbits<<endl;
        cin>>b11;
        q++;
        cout<<secx<<endl;
        cin>>f21;
        q++;
        cout<<secy<<endl;
        cin>>b21;
        q++;
        int wc=whatx(f1,b1,f2,b2,f11,b11,f21,b21);
        if(wc!=0)change(res,wc);
        f1=f11;b1=b11;f2=f21;b2=b21;
      }
      cout<<x<<endl;
      cin>>bit;
      res[x-1]=bit;
      cout<<y<<endl;
      cin>>bit;
      res[y-1]=bit;
      x++;y--;
      q+=2;
    }
    for(int fans:res)cout<<fans;
    cout<<endl;
    char ch;
    cin>>ch;
    if(ch=='N')break;
  }
  return 0;
}