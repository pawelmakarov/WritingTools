#include "Paper.h"

Paper::Paper() : space(700), freeSpace(700) {
    content = new std::string();
}
Paper::Paper(int space) : space(space), freeSpace(space) {
    content = new std::string();
    std::cout << "Paper::Paper(int)"<< std::endl;
}

int Paper::getSpace() const {
    return space;
}
int Paper::getFreeSpace() const {
    return freeSpace;
}

void Paper::addContent(const std::string& message) {
    if ( freeSpace == 0 ) {
        throw OutOfSpace();
    }
    if ( message.size() > freeSpace ) {
        *content += message.substr(0, freeSpace);
        freeSpace = 0;
        throw OutOfSpace();
    }
    *content += message;
    freeSpace -= message.size();
}

void Paper::show() const {
    std::cout << *content << std::endl;
}

Paper::~Paper() {
    delete content;
    std::cout << "Paper::~Paper()" << std::endl;
}

