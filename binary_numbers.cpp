#include <iostream>
#include <limits>

using namespace std;



int main()
{
    int n;
    cin >> n;
    
    int count = 0, current = 0;
    while(n != 0){
        int binNum = n % 2;
        if(binNum == 1){
            current++;
        } else {
            current = 0;
        }
        if(current > count){
            count = current;
        }
        n /= 2;
    }
    
    cout << count << endl;
    
    

    return 0;
}
