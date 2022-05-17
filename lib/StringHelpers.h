//
// Created by gordo on 17.05.22.
//

#ifndef CHESSENGINE_LIB_STRINGHELPERS_H
#define CHESSENGINE_LIB_STRINGHELPERS_H

#include <string>
#include <vector>
#include <sstream>
#include <utility>

class StringHelpers {
public:
    static std::vector<std::string> explode(std::string const &s, char delim);
};


#endif //CHESSENGINE_LIB_STRINGHELPERS_H
