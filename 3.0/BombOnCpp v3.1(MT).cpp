﻿#include <windows.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <thread>

using namespace std;

void th1() {
    std::ofstream fout;
    std::string a;
    for (int i = 0; i < 20000; i++) {
        std::string a = std::to_string(i);
        fout.open(a);
        for (int j = 0; j < 50; j++)
        {
            fout << "0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"; // ������ ������ � ����
        }
        fout.close();
    }
}
void th2() {
    std::ofstream fout;
    std::string a;
    for (int i = 20001; i < 40000; i++) {
        std::string a = std::to_string(i);
        fout.open(a);
        for (int j = 0; j < 50; j++)
        {
            fout << "0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"; // ������ ������ � ����
        }
        fout.close();
    }
}
void th3() {
    std::ofstream fout;
    std::string a;
    for (int i = 40001; i < 60000; i++) {
        std::string a = std::to_string(i);
        fout.open(a);
        for (int j = 0; j < 50; j++)
        {
            fout << "0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"; // ������ ������ � ����
        }
        fout.close();
    }
}
void th4() {
    std::ofstream fout;
    std::string a;
    for (int i = 60001; i < 80000; i++) {
        std::string a = std::to_string(i);
        fout.open(a);
        for (int j = 0; j < 50; j++)
        {
            fout << "0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"; // ������ ������ � ����
        }
        fout.close();
    }
}

int main()
{
    string wait;
    thread th1(th1);
    thread th2(th2);
    thread th3(th3);
    thread th4(th4);
    th1.join();
    th2.join();
    th3.join();
    th4.join();
    std::cout << "Files creation completed successfully! | Sozdaniye faylov uspeshno zaversheno!" << std::endl;
    std::cin >> wait;
    return 0;
}