#include "testlib.h"

int main(int argc, char * argv[]) {
    setName("compares expected and actual integer outputs");
    registerTestlibCmd(argc, argv);
    int x = ans.readInt();
    int y = ouf.readInt();
    if (x != y)
        quitf(_wa, "expected %d, found %d", x, y);
    quitf(_ok, "answer is %d", x);
}
