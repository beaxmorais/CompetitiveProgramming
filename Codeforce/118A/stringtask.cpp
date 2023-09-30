    #include <iostream>
    #include <vector>
    #include <cctype>
    using namespace std; 
     
    int main() {
      string name;
      cin>>name;
     
      string saida;
     
      for(int i = 0; i <name.size(); i++){
        
        name[i] = tolower(name[i]);
        if(i == 0)
          saida +=".";
     
        if (name[i] != 'o' && name[i] != 'u' && name[i] != 'a' && name[i] != 'i'&& name[i] != 'e' && name[i] != 'y'){
          saida+=name[i];
     
          if(i < name.size() -1)
            saida +=".";
        }
      }
     
      if (saida[saida.size() -1] == '.')
        saida.pop_back();
     
      cout << saida <<endl;
    }