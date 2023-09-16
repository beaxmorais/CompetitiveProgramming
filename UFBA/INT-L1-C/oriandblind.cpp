#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int xp[n];
    for(int i = 0; i < n; i++)
        cin>>xp[i];

    int bonus[n];
    for(int i=0; i<n; i++)
        cin>>bonus[i];

    int upar, addbonus;
    cin>>upar>>addbonus;
    for(int i=0; i<n; i++){
        bonus[i] = addbonus + bonus[i];
    }

    int sum = 0;

    for(int i =0; i<n; i++){
        sum += bonus[i] * xp[i];
    }

    if(sum >= upar)
        cout <<"Upou de Nivel!"<<endl;
    else
        cout<<"Nao foi dessa vez!"<<endl;
}