/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:20:08 by obajja            #+#    #+#             */
/*   Updated: 2025/10/15 12:23:01 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string replacer (std::string &text, std::string &to_find, std::string &to_replace)
{
    size_t j;
    size_t pos;
    std::string result;

    j = -1;
    pos = 0;
    if (text.empty())
        return("");

    while(text.find(to_find, pos) != std::string::npos)
    {
        pos = text.find(to_find, pos);
        result.append(text.substr(j + 1, pos - j - 1));
        result.append(to_replace);
        pos += to_find.length();
        j += pos - j - 1;
    }
    if (text[j])
        result.append(text.substr(j + 1, text.length()));

    return (result);
}

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::string  text;
    std::string  result;
    std::string outfile;
    std::stringstream buffer;

    if (argc != 4)
    {
        std::cout << "Usage: ./replacer <filename> <string to_find > <string to_replace>" << std::endl;
        return (1);
    }
    else
    {
        std::ifstream   ifs(argv[1]);
        if (!ifs)
        {
            std::cout << "Error: File cannot open" << std::endl;
            return (1);
        }
        s1 = argv[2];
        s2 = argv[3];
        outfile = argv[1];
        outfile.append(".replace");
        buffer << ifs.rdbuf();
        text = buffer.str();
        std::cout << "Texte Original:\n" << text << std::endl;
        result = replacer(text, s1, s2);
        std::cout << "\nTexte Apres remplacements:\n" << result << std::endl;
        std::ofstream   ofs(outfile.c_str());
        if (!ofs)
        {
            std::cout << "Error: File cannot open" << std::endl;
            ofs.close();
            return (1);
        }
        ofs << result << std::endl;
        ofs.close();
    }
    return 0;
}