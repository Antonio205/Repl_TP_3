#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string str;
    std::cin >> str;
    std::string str_new = "";
    for(int i = 0; i < str.length(); i+=2) 
    {
        str_new += str[i];
    }
    str = str_new;
    std::cout << str;
}

