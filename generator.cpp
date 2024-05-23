#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int t; t=rnd.next(1,100);
    cout << t << endl;
    while(t--){
        
        cout << rnd.next(0, 3) << endl;
        for(int i=0;i<16;i++){
            int x = rnd.next(1,3);
            if(x % 2 == 1){
                cout << rnd.next(-10, 0) << endl;
                
            }
            else
            {
                cout << rnd.next(-10, 10) << endl;
                
            }
            
        }
        
    }
}
