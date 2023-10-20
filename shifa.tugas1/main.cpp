#include <iostream>

using namespace std;

int main()
{
    int s, e, m;
    s=10;
    e=8;

    cout << "s="<<s << endl;
    cout << "e="<<e <<endl;

    m=s;
    s=e;
    e=m;
    cout <<"________" <<endl;
    cout << "s="<<s <<endl;
    cout << "e="<<e <<endl;
    return 0;
}
