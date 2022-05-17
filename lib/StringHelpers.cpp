//
// Created by gordo on 17.05.22.
//

#include "StringHelpers.h"

std::vector<std::string> StringHelpers::explode(const std::string &s, char delim) {
    std::vector<std::string> result;
    std::istringstream iss(s);

    for (std::string token; std::getline(iss, token, delim);) {
        result.push_back(std::move(token));
    }

    return result;
}
