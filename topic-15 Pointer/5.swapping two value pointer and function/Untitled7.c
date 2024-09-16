#include<iostream>
using namespace std;

int main()
{
    int start , endh ;
    cin >> start >> endh ;

    if(start<endh)
    {

        cout << "O JOGO DUROU " << endh - start << " HORA(S)" << endl;
    }
    if(start>=endh)
    {
        cout << "O JOGO DUROU " << 24 - start + endh  << " HORA(S)" << endl;
    }
    return 0;
}
