#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    static const string characterList="0123456789abcdefghijklmnoprstuvwxyz";
    srand(time(NULL));
    string randomCharacters="";
    for(int i=0;i<8;i++){
        randomCharacters+=characterList[rand()%characterList.size()];
        
    }
    cout<<"Random Character:"<<randomCharacters<<endl;
    return 0;
}

