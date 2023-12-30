#include <iostream>
using namespace std;

class Glass
{
public:
  int nakami;
  Glass():nakami(10){}
  void dasu(){nakami -= 2;
  }
};

int main(){

  Glass glass;
  cout << glass.nakami << endl;
  glass.dasu ();
  cout << glass.nakami << endl;
  
  return 0;
}

