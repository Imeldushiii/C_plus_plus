#include <iostream>
int funkcja(int a, int wroc); //FUNKCJA GLOBALNA, ABY WSZEDZIE MOZNA BYLO JA WYWOLAC

int main()
{
    int liczba = funkcja(4,7); //ZWRACA NAM INTA, BO W FUNKCJI DALISMY RETURN
    std::cout << liczba << std::endl;
    return 0;
}
int funkcja(int a, int wroc) {
    std::cout << a << std::endl;
    return 2 * wroc; // FUNKCJA ZWRACA LICZBE
}

