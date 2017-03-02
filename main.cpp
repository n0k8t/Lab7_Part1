#include <string>
#include <iostream>

// Проверка на полиндром
bool check(std::string & str)
{
    size_t len = str.size();
    for (size_t i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string buf;
    std::cout << "To stop operating enter -> end <-" << std::endl << std::endl;

    do {
        std::cout << "Enter a string:  ";
        std::cin >> buf;

        if (buf == "end")
        {
            return 0;
        }

        if (check(buf))
        {
            std::cout << "It is a palindrome" << std::endl << std::endl;
        }
        else
        {
            std::cout << "It isn't a palindrome" << std::endl << std::endl;
        }
    } while (true);

    return 0;
}