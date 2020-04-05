/*
    Author: @yash_31
*/
#include<bits/stdc++.h>
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
#define deb(x) std::cout<<"["<<#x<<":"<<x<<"]"<<endl;
#define whole(x) (x).begin(),(x).end()

using namespace std;

void n2(int trace){
  if(trace==2){
    cout<<"POSSIBLE"<<endl;
    cout<<"1 2\n2 1"<<endl;
  }
  else if(trace==4){
    cout<<"POSSIBLE"<<endl;
    cout<<"2 1\n1 2"<<endl;
  }
  else cout<<"IMPOSSIBLE"<<endl;
}

void n3(int trace){
  if(trace==3){cout<<"POSSIBLE"<<endl;cout<<"1 2 3\n3 1 2\n2 3 1"<<endl;}
  else if(trace==6){cout<<"POSSIBLE"<<endl;cout<<"1 2 3\n2 3 1\n3 1 2"<<endl;}
  else if(trace==9){cout<<"POSSIBLE"<<endl;cout<<"3 1 2\n2 3 1\n1 2 3"<<endl;}
  else cout<<"IMPOSSIBLE"<<endl;
}

void n4(int trace){
  if(trace==4){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n4 1 2 3\n3 4 1 2\n2 3 4 1\n";}
  else if(trace==6){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2\n";}
  else if(trace==7){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n3 1 4 2\n4 3 2 1\n2 4 1 3\n";}
  else if(trace==8){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n";}
  else if(trace==9){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n2 4 1 3\n4 3 2 1\n3 1 4 2\n";}
  else if(trace==10){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n2 4 1 3\n3 1 4 2\n4 3 2 1\n";}
  else if(trace==11){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n3 4 2 1\n2 1 4 3\n4 3 1 2\n";}
  else if(trace==12){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4\n3 4 1 2\n2 3 4 1\n4 1 2 3\n";}
  else if(trace==13){cout<<"POSSIBLE"<<endl;cout<<"2 1 3 4\n3 4 2 1\n1 3 4 2\n4 2 1 3\n";}
  else if(trace==14){cout<<"POSSIBLE"<<endl;cout<<"3 1 2 4\n1 4 3 2\n2 3 4 1\n4 2 1 3\n";}
  else if(trace==16){cout<<"POSSIBLE"<<endl;cout<<"4 1 2 3\n1 4 3 2\n2 3 4 1\n3 2 1 4\n";}
  // else if(trace==8){cout<<"POSSIBLE"<<endl;cout<<"2 1 3 4\n1 2 4 3\n4 3 2 1\n3 4 1 2\n";}
  // else if(trace==9){cout<<"POSSIBLE"<<endl;cout<<"2 4 1 3\n3 1 4 2\n4 3 2 1\n1 2 3 4\n";}
  // else if(trace==10){cout<<"POSSIBLE"<<endl;cout<<"1 4 2 3\n3 2 4 1\n4 1 3 2\n2 3 1 4\n";}
  // else if(trace==11){cout<<"POSSIBLE"<<endl;cout<<"3 4 2 1\n1 3 4 2\n4 2 1 3\n2 1 3 4\n";}
  // else if(trace==12){cout<<"POSSIBLE"<<endl;cout<<"3 4 2 1\n1 3 4 2\n2 1 3 4\n4 2 1 3\n";}
  // else if(trace==13){cout<<"POSSIBLE"<<endl;cout<<"3 4 2 1\n4 2 1 3\n1 3 4 2\n2 1 3 4\n";}
  // else if(trace==14){cout<<"POSSIBLE"<<endl;cout<<"3 1 4 2\n2 4 1 3\n4 2 3 1\n1 3 2 4\n";}
  // else if(trace==16){cout<<"POSSIBLE"<<endl;cout<<"4 2 1 3\n1 4 3 2\n2 3 4 1\n3 1 2 4\n";}
  else cout<<"IMPOSSIBLE"<<endl;
}

void n5(int trace){
  if(trace==5){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 1 4 5 3\n3 5 1 2 4\n4 3 5 1 2\n5 4 2 3 1\n";} 
  else if(trace==7){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n3 1 4 5 2\n4 5 2 1 3\n5 3 1 2 4\n2 4 5 3 1\n";}
  else if(trace==8){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 1 4 5 3\n3 5 1 2 4\n5 4 2 3 1\n4 3 5 1 2\n";}
  else if(trace==9){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 1 4 5 3\n4 5 1 3 2\n3 4 5 2 1\n5 3 2 1 4\n";}
  else if(trace==10){cout<<"POSSIBLE"<<endl;cout<<"1 5 2 4 3\n4 2 3 1 5\n3 4 1 5 2\n5 3 4 2 1\n2 1 5 3 4\n";}
  else if(trace==11){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 3 1 5 4\n3 5 4 1 2\n4 1 5 2 3\n5 4 2 3 1\n";}
  else if(trace==12){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 3 1 5 4\n3 4 5 1 2\n5 1 4 2 3\n4 5 2 3 1\n";}
  else if(trace==13){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 3 1 5 4\n5 1 4 2 3\n4 5 2 3 1\n3 4 5 1 2\n";}
  else if(trace==14){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 1 4 5 3\n3 4 5 1 2\n4 5 2 3 1\n5 3 1 2 4\n";}
  else if(trace==15){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 3 1 5 4\n3 4 5 1 2\n4 5 2 3 1\n5 1 4 2 3\n";}
  else if(trace==16){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 3 4 5 1\n4 1 5 2 3\n5 4 1 3 2\n3 5 2 1 4\n";}
  else if(trace==17){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 4 1 5 3\n4 3 5 2 1\n5 1 4 3 2\n3 5 2 1 4\n";}
  else if(trace==18){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 4 5 1 3\n3 5 4 2 1\n4 3 1 5 2\n5 1 2 3 4\n";}
  else if(trace==19){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 5 1 3 4\n3 4 5 1 2\n4 3 2 5 1\n5 1 4 2 3\n";}
  else if(trace==20){cout<<"POSSIBLE"<<endl;cout<<"1 2 3 4 5\n2 5 4 1 3\n3 4 5 2 1\n4 3 1 5 2\n5 1 2 3 4\n";}
  else if(trace==21){cout<<"POSSIBLE"<<endl;cout<<"2 1 3 4 5\n1 5 4 2 3\n3 4 5 1 2\n4 3 2 5 1\n5 2 1 3 4\n";}
  else if(trace==22){cout<<"POSSIBLE"<<endl;cout<<"3 1 2 4 5\n1 5 4 2 3\n2 4 5 3 1\n4 3 1 5 2\n5 2 3 1 4\n";}
  else if(trace==23){cout<<"POSSIBLE"<<endl;cout<<"4 1 2 3 5\n1 5 3 4 2\n2 4 5 1 3\n3 2 4 5 1\n5 3 1 2 4\n";}
  else if(trace==25){cout<<"POSSIBLE"<<endl;cout<<"5 1 2 3 4\n1 5 3 4 2\n2 4 5 1 3\n3 2 4 5 1\n4 3 1 2 5\n";}
  else cout<<"IMPOSSIBLE"<<endl;
}

int main()
{
  fatafat
  int t,trace,n;
  cin>>t;
  for(int tt=1;tt<=t;tt++){
    cin>>n>>trace;
    cout<<"Case #"<<tt<<": ";
    if(n==2){n2(trace);}
    else if(n==3){n3(trace);}
    else if(n==4){n4(trace);}
    else if(n==5){n5(trace);}
    else cout<<"-\n";
  }
  return 0;
}
