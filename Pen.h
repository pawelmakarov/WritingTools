#ifndef PEN_H
#define PEN_H

#include "Paper.h"

class Pen {
    public:
        void write(Paper& paper, const std::string& message);
};

#endif //PEN_H