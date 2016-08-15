#include "Pen.h"

void Pen::write(Paper& paper, const std::string& message) {
    paper.addContent(message);
}