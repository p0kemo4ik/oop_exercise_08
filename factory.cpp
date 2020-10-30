#include "factory.hpp"

std::shared_ptr<figure> factory::FigureCreate(std::istream &is) {
    std::string name;
    is >> name;
    if (name == "pentagon" ) {
        return std::shared_ptr<figure> ( new pentagon(is));
    } else if (name == "hexagon") {
        return std::shared_ptr<figure> ( new hexagon(is));
    } else if (name == "octagon") {
        return std::shared_ptr<figure> ( new octagon(is));
    } else {
        throw std::logic_error("There is no such figure\n");
    }
}

std::shared_ptr<figure> factory::FigureCreateFile(std::ifstream &is) {
    std::string name;
    is >> name;
    if (name == "pentagon" ) {
        return std::shared_ptr<figure> (new pentagon(is));
    } else if (name == "hexagon") {
        return std::shared_ptr<figure> (new hexagon(is));
    } else if (name == "octagon") {
        return std::shared_ptr<figure> (new octagon(is));
    } else {
        throw std::logic_error("There is no such figure\n");
    }
}