#include <cctype>
#include <iostream>

int main (int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = -1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (argv[++i])
        {
            while (argv[i][++j])
                std::cout << (char)toupper(argv[i][j]);
            if (argv[i + 1])
                std::cout << ' ';
            j = -1;
        }
    }
    std::cout << std::endl;
    return (0);
}