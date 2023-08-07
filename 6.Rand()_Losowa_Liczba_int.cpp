#include <iostream>

#include <time.h>

int main()
{
    srand(time(0)); // WLACZAMY CZAS ABY NIE POWTARZALA SIE LICZBA CALY CZAS TA SAMA
    for(int x = 0; x < 400; x++) {

        int result = rand() % 100; //RANDOMOWA LICZBA OD 0 DO 100
        std::cout << result << std::endl;
    }
    return 0;
}
