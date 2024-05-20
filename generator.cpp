#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  registerGen(argc, argv, 1);
  int t=rnd.next(1, 1000);
  cout << t << endl;
  while(t--){
    cout << rnd.next(0, 3) << endl;
    for(int i=0;i<16;i++){
        cout << rnd.next(-10, 10) << " ";
    }
    cout << endl;
  }
}
