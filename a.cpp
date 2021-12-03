    #include <bits/stdc++.h>
    using namespace std;
    #define CPP_STR(x) CPP_STR_I(x)
    #define CPP_CAT(x,y) CPP_CAT_I(x,y)
    #define CPP_STR_I(args...) #args
    #define CPP_CAT_I(x,y) x ## y
    #define ASSERT(expr...) assert((expr))
    //ループ簡略化
    #define FOR(i,start,end) for(auto i=(start);i<end;i++)//繰り返し(始点指定)(変数名,初期値,最終値)
    #define rep(j,n) for(int j = 0; j < (n); ++j)//繰り返し(始点0)(変数名,回数)
    #define rep1(i,n) FOR(i,1,n+1)//繰り返し(始点1)(変数名,回数)
    //cout to pri
    #define pri(x) cout<<x//改行なし出力
    #define prn cout<<endl;//改行のみ出力
    #define pr(x) {pri(x);prn;}//改行あり出力
    #define debug(x) {pri(x);prn;}//改行あり出力(わかりやすく)
    #define END(a) {pr(a);return;}//出力と終了
    #define pr2(x,y) {pri(x);pri(y);}//2個同時出力
    #define pr3(x,y,z) {pr2(x,y);pri(z);}//3個同時出力
    #define prYes print("Yes")//Yesと出力
    #define prNo print("No")//Noと出力
    #define prYES print("YES")//YESと出力
    #define prNO print("NO")//NOと出力
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
    #define vsort(d) ALL(sort,d)//配列sort(昇順)
    #define rvsort(d) RALL(sort,d)//配列sort(降順)
    #define prv(a) for(auto x:a)pr2(x,endl);//配列全表示(改行)
    #define prv2(a,b) for(auto x:a)pr2(x,b);//配列全表示(選択可)


    int sum_int(map<char,int> &ints){
      int ans = 0;
      string sum;
      int num;
      char fugou = '+';
      while(fugou!=';'){
          in(sum);
          if(isdigit(sum.at(0))){
            num = stoi(sum);
          }
          else{
            num = ints[sum.at(0)];
          }
          if(fugou=='+'){
              ans += num;
          }
          else if(fugou=='-'){
              ans -= num;
          }
          in(fugou);
        if(fugou==';') return ans;
      }
      return ans;
    }
    void make_int(char name,map<char,int> &ints){
      ints[name] = sum_int(ints);
    }

    void print_int(map<char,int> &ints){
      pr(sum_int(ints));
    }
    //vec
    vi read_vec(map<char,int> &ints,map<char,vi> &vecs){
      vi ans;
      char star;
      in(star);//debug(star);
      if(star == '['){
        char fugou = ',';
        string nun;
        int i=0;
        while(fugou != ']'){
          in2(nun,fugou);
          //pr2(nun,fugou);
          if(isdigit(nun.at(0))){
            ans.push_back(stoi(nun));
          }
          else{
            char nune = ints.at(nun.at(0));
            ans.push_back(nune);
          }
          i++;
          if(fugou == ']')break;
        }
      }
      else{
        for(auto x :vecs.at(star)){
          ans.push_back(x);
        }
      }
      return ans;
    }
    vi sum_vec(map<char,int> &ints,map<char,vi> &vecs){
      vi ans,temp;
      char fugou = '+';
      for(auto x:read_vec(ints,vecs))ans.push_back(x);
      while(fugou != ';'){
        in(fugou);
        if(fugou == ';')break;
        temp = read_vec(ints,vecs);
        if(fugou == '+'){
          int i = 0;
          for(auto x : ans){
            ans[i] = x + temp[i];
            i++;
          }
        }
        else if (fugou == '-'){
          int i = 0;
          for(auto x : ans){
            ans[i] = x - temp[i];
            i++;
          }
        }
      }
      return ans;
    }

    void print_vec(map<char,int> &ints,map<char,vi> &vecs){
      vi temp = sum_vec(ints,vecs);
      //vi temp = read_vec(ints,vecs);
      //vi temp = {2,5,4,5,3,2,3,3,3,23,32};
      pri("[ ");
      prv2(temp," ");
      pr("]");
    }

    void make_vec(char name,map<char,int> &ints,map<char,vi> &vecs){
      vecs[name] = sum_vec(ints,vecs);
    }


    int main() { 
      int N;
      string vo ;
      in(N);
      map<char,int> ints;
      map<char,vi> vecs;
      rep(j,N){
        in(vo);
        if(vo == "int"){
          char name,iko;
          in(name);
          in(iko);
          make_int(name,ints);
        }
        else if (vo == "print_int"){
          print_int(ints);
        }
        else if (vo == "vec"){
          char name,iko;
          in2(name,iko);
          make_vec(name,ints,vecs);
        }
        else if(vo == "print_vec"){
          print_vec(ints,vecs); 
        }
      }
      //print_vec(ints,vecs);
    }