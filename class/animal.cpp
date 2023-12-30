#include <iostream>

class Neko{
private:
  std::string name;
public:
  Neko(std::string s){
    name = s;
  }
  void bark(){
    std::cout << "Nyaaaa! I'm " << name << " !!!" << std::endl;
  }
};

int main(){

  std::string s;
  std::cout << "input name." << std::endl;
  std::cin >> s;
  
  Neko tom(s);
  tom.bark();
  
  return 0;
}

