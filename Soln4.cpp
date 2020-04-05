#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
#define ll long long int
#define eb emplace_back
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

void comp(string &s){
    for(char& cc:s){
        if(cc=='1')cc='0';
        else if(cc=='0')cc='1';
    }
}

int main()
{
    int t,nbits;
    cin>>t>>nbits;
    for(int tt=1;tt<=t;tt++){
        int i,j,torev=-1,tocomp=-1;
        char bit;
        string str(nbits,'-');
        for(i=1,j=0;j<nbits/2;i+=2){
            if(i>10 && i%10==1){
                if(tocomp!=-1){
                    cout << tocomp+1 << endl;
                    cin >> bit;
                    if(str[tocomp]!=bit)comp(str);
                }
                else {cout << "1"<<endl;cin>>bit;}
                if(torev!=-1){
                    cout << torev+1 << endl;
                    cin >> bit;
                    if(str[torev]!=bit)reverse(whole(str));
                }
                else {cout<<"1"<<endl;cin>>bit;}
            }
            else{
                cout << j+1 << endl;
                cin >> str[j];
                cout << nbits-j << endl;
                cin >> str[nbits-1-j];
                if(str[j]==str[nbits-1-j])tocomp=j;
                else if(str[j]!=str[nbits-1-j])torev=j;
                ++j;
            }
        }
        cout << str << endl;
        char ch;
        cin>>ch;
        if(ch=='N')break;
    }
    return 0;
}
