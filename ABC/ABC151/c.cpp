#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> p(N+1); // 問題nをWAした回数を格納
  vector<bool> clear_checker(N+1,false); // 問題nをまだクリアしてないかどうか
  
  int ans=0,pena=0;
  int p_n=0; //提出した問題
  string S;

  for(int i=0;i<M;i++){
    cin >> p_n >> S;

    if(S=="AC"){
      if(!clear_checker[p_n]){
        clear_checker[p_n]=true;
        ans++;
        pena += p[p_n];
      }

      else{
        continue;
      }
    }

    else if(S=="WA"){
      p[p_n]++;
    }

  }

  cout << ans << " " << pena << endl;
}