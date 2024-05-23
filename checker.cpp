#include "testlib.h"
#include <vector>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    setName("compare two signed int%d's", 8 * int(sizeof(int)));
    registerTestlibCmd(argc, argv);
 
    vector<int> expected, available;
 
    int count = 0;
    while (!ans.seekEof() && !ouf.seekEof() && count < 100) {
        int ja = ans.readInt();
        int pa = ouf.readInt(-1,200,"Final hitpoints");
        expected.push_back(ja);
        available.push_back(pa);
        count++;
    }
 
    for (int i = 0; i < expected.size(); ++i) {
        if (i >= available.size()) {
            quitf(_wa, "More integers expected in output file");
        }
        if (expected[i] != available[i]) {
            quitf(_wa, "expected %d, found %d at position %d", expected[i], available[i], i + 1);
        }
    }
 
    if (available.size() > expected.size()) {
        quitf(_wa, "Extra integers found in output file");
    }
 
    quitf(_ok, "Answer is correct for %d integers", count);
 
    return 0;
}
