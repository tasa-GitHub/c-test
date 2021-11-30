#include <bits/stdc++.h>
using namespace std;
#define CPP_STR(x) CPP_STR_I(x)
#define CPP_CAT(x,y) CPP_CAT_I(x,y)
#define CPP_STR_I(args...) #args
#define CPP_CAT_I(x,y) x ## y
#define ASSERT(expr...) assert((expr))
//ループ簡略化
#define FOR(i,start,end) for(auto i=(start);i<end;i++)//繰り返し(始点指定)(変数名,初期値,最終値)
#define rep(i,n) FOR(i,0,n)//繰り返し(始点0)(変数名,回数)
#define rep1(i,n) FOR(i,1,n+1)//繰り返し(始点1)(変数名,回数)
//cout to pri
#define pr(x) cout<<x//改行なし出力
#define prn cout<<endl//改行のみ出力
#define pri(x) {pr(x);prn;}//改行あり出力
#define debug(x) {pr(x);prn;}//改行あり出力(わかりやすく)
#define END(a) {pri(a);return;}//出力と終了
#define pr2(x,y) {pr(x);pr(y);}//2個同時出力
#define pr3(x,y,z) {pr2(x,y);pr(z);}//3個同時出力
#define prYes() pri("Yes")//Yesと出力
#define prNo() pri("No")//Noと出力
#define prYES() pri("YES")//YESと出力
#define prNO() pri("NO")//NOと出力
//cin to in
#define in(x) cin>>x
#define inum(X,tim) rep(i,tim){cin>>X[i];}
#define innum(X,Y,tim) rep(i,tim){cin>>X[i]>>Y[i];}
#define in2(x,y) cin>>x>>y
#define in3(x,y,z) cin>>x>>y>>z
#define in4(x,y,z,X) cin>>x>>y>>z>>X
#define in5(x,y,z,X,Y) cin>>x>>y>>z>>X>>Y
#define in6(x,y,z,X,Y,Z) cin>>x>>y>>z>>X>>Y>>Z
//変数宣言
using i8  = int8_t;
using u8  = uint8_t;
using i16 = int16_t;
using u16 = uint16_t;
using i32 = int32_t;
using u32 = uint32_t;
using i64 = int64_t;//int64_t変数宣言
using u64 = uint64_t;
//配列宣言
typedef long long ll;//long変数宣言
typedef vector<int> vi;//int配列宣言
typedef vector<vi> vvi;//int2次元配列宣言
typedef vector<i64> vi64;//int64配列宣言
typedef vector<vi> vvi64;//int64二次元配列宣言
typedef vector<ll> vll;//longlong配列宣言
typedef vector<vll> vvll;//longlong2次元配列宣言
typedef vector<string> vs;//string配列宣言
typedef vector<bool> vb;//bool配列宣言
typedef pair<int, int> P;//pair配列宣言
using f32 = float;
using f64 = double;
using f80 = __float80;
//関数簡略化
#define ALL(fun,vari) (fun)((vari).begin(),(vari).end())//関数.begin(変数).end(変数)
#define RALL(fun,vari) (fun)((vari).rbegin(),(vari).rend())//関数.rbegin(変数).rend(変数)
#define SORT(d) ALL(sort,d)//配列sort(昇順)
#define RSORT(d) RALL(sort,d)//配列sort(降順)
#define prv(a) for(auto x:a)pr2(x,endl);//配列全表示(改行)
#define prv2(a,b) for(auto x:a)pr2(x,b);//配列全表示(選択可)

/*int make_int (% auto var,vs siki){
  int (var);

}*/

int print_vec(vi vec){
  pr("[ ");
  prv2(vec," ");
  pri("]");
}

// 変数名を読み取りイコールを読み飛ばす
string read_name() {
  string name,ikoru;
  in2(name,ikoru);
  return name;
}

// int式の項を1つ読み取る。
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
int read_int(map<string, int> &var_int){
  string var;
  in(var);
  if(isdigit(var.at(0))){
    return stoi(var);
  }
  else {
    return var_int.at(var);
  }
}
// int式全体を読み取って計算する
// var_int : intの変数を保持するmap
int calc_int(map<string, int> &var_int){

  string temp="";
  int ans = 0;

  while(temp != ";"){
    if(temp=="")ans = read_int(var_int);
    else if(temp=="+")ans += read_int(var_int);
    else if(temp=="-")ans -= read_int(var_int);
    in(temp);
  }
  return ans;
}

// vec値を読み取る
// 最初の"["は読み取ってある前提であることに注意
// var_int : intの変数を保持するmap
vector<int> read_vec_val(map<string, int> &var_int){
  vi ans;
  string end_check = ",";
  while(end_check!="]"){
    int num = read_int(var_int);
    ans.push_back(num);
    in("]");
  }
  return ans;
}

// vec式の項を1つ読み取る
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){
  string ans;
  in(ans);
  if(ans == "["){
    return read_vec_val(var_int);
  }
  else {
    return var_vec.at(ans);
  }
}

int main() { 
  int N;
  in(N);
  rep(i,N){
    
  }
  return 0;
}