#ifndef CSV_H
#define CSV_H
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <list>

class CSV
{
    public:
        CSV();
        virtual ~CSV();
         static std::vector<std::vector<std::string>> read();

    protected:

    private:
};

#endif // CSV_H
