#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS];  // "int *b" helyett "int* b" kell +  "_" kimaradt
    std::cout << '1-100 ertekek duplazasa' // <<std::endl; lemaradt 
        for (int i = 0;) //hi�nyos for ciklus, "i <= N_ELEMENTS; i++" hi�nyzik
        {
            b[i] = i * 2;
        }
    for (int i = 0; i; i++) //hi�nyos ciklus, "int i = 0; i <= N_ELEMENTS-1; i++" kell a z�r�jelbe
    {
        std::cout << "Ertek:" //"<< b[i] << std:endl;" lemaradt
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //= 0 lemaradt
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
