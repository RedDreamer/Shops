#include <bits/stdc++.h>
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define ll long long
#define int ll
#define forn(i, a, b) for(int i = (a); i <= (b); ++i)
#define forev(i, b, a) for(int i = (b); i >= (a); --i)
#define VAR(v, i) __typeof( i) v=(i)
#define forit(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define file(s) freopen(s".in","r",stdin); freopen(s".out","w",stdout);
 
using namespace std;
 
const int maxn = (int)3e3 + 100;
const int mod = (int)10;
const int P = (int) 1e6 + 7; 
const double R=6371;  
const double pi = acos(-1.0);
 
#define inf mod
 
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;   
typedef vector<ll> Vll;               
typedef vector<pair<int, int> > vpii;
typedef vector<pair<ll, ll> > vpll;                                     

double x[maxn], y[maxn];
string name[maxn], adres[maxn];
bool was[3333];
vi nodes;
int n;


double res;
double g(double x){
  return pi * x / 180.0;
}        
double dist(int i, int j){
  double lat1 = g(y[i]), lat2 = g(y[j]);
  double lon1 = g(x[i]), lon2 = g(x[j]);
  double sin1=sin((lat1 - lat2) / 2);                               
  double sin2=sin((lon1 - lon2) / 2);
  return 2.0 * R * asin(sqrt(sin1 * sin1 + sin2 * sin2 * cos(lat1) * cos(lat2)));
}

void dfs(int v, bool print = 0){
  was[v] = 1;
  if(print && v != n) cout << v + 2 << ") " << name[v] << ", " << adres[v] << endl;
  double mn = 1e18;
  int nxt = -1;
  for(auto to : nodes){
    if(was[to]) continue;
    double d = dist(v, to);
    if(v == n) cout << to + 2 << " " << dist(v, to) << endl;
    if(mn > d)
      mn = d, nxt = to;    
  }
  if(nxt != -1) {
    cout << mn << endl;
    res += mn, dfs(nxt, print);
  }
}

string nm, nm1;
double val;
void solve(){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
  freopen("1.out", "r", stdin);
  n = 0;
  while(getline(cin, nm))
    name[n++] = nm;
  cin.clear();
  freopen("2.out", "r", stdin);
  n = 0;
  while(getline(cin, nm))
     adres[n++] = nm;
  cin.clear();
  freopen("3.out", "r", stdin);
  n = 0;
  while(cin >> val)
      x[n++] = val;
  cin.clear();
  freopen("4.out", "r", stdin);
  n = 0;
  while(cin >> val)
      y[n++] = val;
  cin.clear();  
  file("Spisok");
  int id;   
  while(cin >> id){
    id -= 2;
    nodes.pb(id);
  }
  memset(was, 0, sizeof(was));
  y[n] = 42.292884;
  x[n] = 69.613181;
  dfs(n, 1);
} 
main () {
  int t = 1;
  while(t--)
    solve(); 
}     