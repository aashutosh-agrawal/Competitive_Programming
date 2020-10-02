#include <iostream>
using namespace std;
 
#define int long long
#define endl "\n"
 
void TowerOfHanoi(int n, char A, char B, char C)
{
    if(n == 1)
    {
        cout<<"move "<<1<<" from "<<A<<" to "<<C<<endl;
        return;
    }
    TowerOfHanoi(n - 1, A, C, B);
    cout<<"move "<<n<<" from "<<A<<" to "<<C<<endl;
    TowerOfHanoi(n - 1, B, A, C);
}
 
int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n = 3;
    TowerOfHanoi(n, 'A', 'B', 'C');    
    return 0;
}