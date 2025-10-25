//
// Created by peng on 2025/10/25.
//

#include <iostream>
#include "Cat.h"
using namespace peng;

auto Cat::show() -> void {

    std::cout << i << " " << j << std::endl;
}

auto Cat::reset() -> void {
    i = j = 0;
}