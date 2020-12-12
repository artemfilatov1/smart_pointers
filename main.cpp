#include <iostream>
#include "smart_p.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    smart_p<long long> s = new long long ();
    
    cout << *s << endl;
    
    return 0;
}
