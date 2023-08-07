#include <iostream> //BIBLIOTEKA PODSTAWOWA
using namespace std; //USUWAMY DYREKTYWY
using std::cin; //NIE MUSIMY TERAZ DAWAC STD::CIN
using std::cout;
using std::endl;
// Lepiej uzywac std::cout, bo jak bedziemy uzywac using namespace std, to zrobi sie konflikt z innymi bibliotekami i to bardzo duzy
int main()
{
    int lol;
    cout << "SUP" << endl;
    cin >> lol ;
    return 0;
}
