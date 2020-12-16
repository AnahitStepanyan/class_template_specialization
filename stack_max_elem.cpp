#include <iostream>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack <int> st;
    int n;
    cin >> n;
    while(n--){
        int q;
        cin >> q;
        if(q == 1){
            int value;
            cin >> value;
            if(st.empty())
                st.push(value);
            else
                st.push(max(value, st.top()));
        } else if (q == 2) {
            if(!st.empty())
                st.pop();
        }  if (q == 3) {
            cout << st.top() << endl;
        }
    }
    
    return 0;
}
