/* study referring
 https://www.asahi-net.or.jp/~yf8k-kbys/newcpp8.html
 */

#include <iostream>
using namespace std;

class Glass
{
  int nakami;
public:
  void dasu(int);
};

void Glass::dasu(int x){
  if(nakami>=x){
    nakami -= x;
    cout << "water extracted." << endl;
    cout << "now glass contains " << nakami << "." << endl;
  } else {
    cout << "no water." << endl;
    cout << "now glass contains only " << nakami << "." << endl;
  }
}

int main(){

  int x = 100;
  Glass glass(x);
  cout << glass.nakami << endl;
  int y = 2;
  glass.dasu(y);
  cout << glass.nakami << endl;
  glass.dasu(y);
  cout << glass.nakami << endl;
  
  return 0;
}

