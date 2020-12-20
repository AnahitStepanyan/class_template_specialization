#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack <int> front, end;
  int q; cin >> q;
  while (q--) { // 1, 2
    int t; cin >> t;
    if (t == 1) {
      int x; cin >> x;
      end.push(x);
    } else {
      if (front.empty()) {
        while (!end.empty()) {
          front.push(end.top());
          end.pop();
        }
      }
      if (!front.empty()) {
        if (t == 2) front.pop();
        if (t == 3) cout << front.top() << endl;
      }
    } 
  }  
  return 0;
}
