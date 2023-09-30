#include <iostream>
#include <algorithm>   
using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int t = 0;

    t = a + b + c;
    t = max(t, (a + b) * c);
    t = max(t, a * b * c);
    t = max(t, a* (b + c) );

    cout << t << endl;
}