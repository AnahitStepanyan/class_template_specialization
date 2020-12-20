#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  string s = "";
  stack <string> st;

  int q; cin >> q;
  while(q--){
    int t; cin >> t;
    if(t == 1){
      string w;
      cin.ignore();
      getline(cin, w);
      // cin >> w;
      st.push(s);
      s += w;
    } else if (t == 2) {
      int k; cin >> k;
      st.push(s);
      s.erase(s.end()-k, s.end());
    } else if (t == 3) {
      int k; cin >> k;
      cout << s[k-1] << endl;
    } else {
      s = st.top();
      st.pop();
    }
  }

  return 0;
}
