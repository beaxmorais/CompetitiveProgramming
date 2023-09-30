#include <iostream>
using namespace std;
     
int main() {
    int n;
    cin>>n;
     
      int coord[n][3];
     
    for(int i=0; i<n; i++){
     for(int j=0; j<3; j++){
        cin>>coord[i][j];
        }
    }
     
    int sum = 0;
    bool equilibrium = true;
     
    for(int j=0; j<3; j++){
        for(int i=0; i<n; i++){
          sum +=coord[i][j];
        }
        if(sum != 0){
          equilibrium = false;
          break;
        }
    }
     
    if(equilibrium)
        cout << "YES" <<endl;
     
    else
        cout << "NO" << endl;
}