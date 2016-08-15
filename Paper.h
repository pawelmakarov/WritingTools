#ifndef PAPER_H
#define PAPER_H

#include <iostream>
#include <string>
#include "Exceptions.h"

class Paper {
    private:
        std::string* content;
        int space;
        int freeSpace;
    public:
        Paper();
        Paper(int space);

        int getSpace() const;
        int getFreeSpace() const;

        void addContent(const std::string& message);
        void show() const;
        ~Paper();
};

#endif //PAPER_H