/* Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.


This contest offers n problems to the participants.

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    int p = 0;
    int cont = 0;
    cin>>n;

    int team[n][3];

    for(int i = 0; i < n; i++){

        for(int k = 0; k < 3; k++)
            cin>>team[i][k];
    }


   for(int i = 0; i < n; i++){
        for(int k = 0; k < 3; k++){
            if(team[i][k] == 1)
                cont++;
        }

        if(cont >= 2)
            p++;

        cont = 0;
    }

    cout<<p<<endl;
}