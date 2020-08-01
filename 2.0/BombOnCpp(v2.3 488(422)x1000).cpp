#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    std::string *confirmation = new std::string;
    std::cout << "Vy uvereny chto khotite zapustit dannuyu programmu i ponimaniye vse vozmozhnyye posledstviya(y/n)?" << std::endl;
    std::cin >> *confirmation;
    if (*confirmation == "y") {
        *confirmation = "n";
        std::cout << "Vy tochno uvereny v etom(y/n)?" << std::endl;
        std::cin >> *confirmation;
        if (*confirmation == "y") {
            *confirmation = "n";
            std::cout << "Vnimaniye!dannaya programma sozdast 10000 faylov v tekushchey direktorii!Vy podtverzhdayete chto polnostyu osoznayete eto i berete vsyu otvetstvennost na sebya(y/n)?" << std::endl;
            std::cin >> *confirmation;
            if (*confirmation == "y"){
                *confirmation = "n";
                delete confirmation;
                goto Confirmed;
            }
            else { std::exit(0); }
        }
        else { std::exit(0); }
    }
    else { std::exit(0); }
    Confirmed:
    std::ofstream fout;
    std::string a; 
    for (unsigned short i = 0; i < 10000; i++) {
        std::string a = std::to_string(i);
        fout.open(a);
        for (int j = 0; j < 1000; j++)
        {
            fout << "0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"; // запись строки в файл
        }
        fout.close();
        std::cout << i <<std::endl;
    }
    std::cout << "Files creation completed successfully! | Sozdaniye faylov uspeshno zaversheno!" << std::endl;
    std::cin >> a;
    return 0;
}