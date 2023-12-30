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

  Neko tom;
  tom.bark();
  
  return 0;
}

