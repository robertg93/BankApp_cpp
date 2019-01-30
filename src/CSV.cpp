#include "CSV.h"


CSV::CSV()
{
    //ctor
}

CSV::~CSV()
{
    //dtor
}

std::vector<std::vector<std::string>> CSV::read()
{
    std::vector<std::vector<std::string>> data;

                   std::string line;
                    std::vector<std::string> vec;
                    std::ifstream f ("NewBankAccounts.txt");

                    while(getline(f, line))
                            {
                                vec.push_back(line);
                            }

                    //std::cout<<vec[0] << std::endl;

        for (int i =0; i<vec.size(); i++){
                    std::string sentence = vec[i];
                    std::istringstream iss(sentence);
                    std::vector<std::string> tokens;
                    std::string token;
                    while (std::getline(iss, token, ',')) {
                        if (!token.empty())
                            tokens.push_back(token);
                    }
                    data.push_back(tokens);
        }
/*
                for (int i =0; i<vec.size(); i++){
                        for (int j =0; j<4; j++){
                                    std::cout<< data[i][j] << " ";
                        }
                    std::cout<<std::endl;
                }
*/

    return data;
}

