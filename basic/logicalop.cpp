#include<iostream>
using namespace std;
int main()
{
    // checking T||f||f&&!f
    bool a = true;
    bool b = false;
    bool c = false;
    bool d = false;
    cout << (a || b || c && !d) <<endl;
    cout << ( b&& c || a || b || !c) <<endl;
    return 0;
}