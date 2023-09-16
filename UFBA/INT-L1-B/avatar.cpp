#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    int v[n];
    for (int i = 0; i < n; i ++)
        cin>>v[i];

    int v1[n];
    for (int i = 0; i < n; i++)
        cin>>v1[i];
    
    int ident; 
    cin>>ident;
    vector<int>achados;
    for(int i=0; i<n; i++){
        if(ident == v[i])
            achados.push_back(v1[i]);
    }

    if(achados.size() == 0)
        cout << "Nenhum" << endl;
    else{
        for (int i = 0; i < achados.size(); i++) {
        cout << achados[i] << " ";
    }
    }
    
}