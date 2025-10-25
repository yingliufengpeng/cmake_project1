//
// Created by peng on 2025/10/25.
//

#include <iostream>
#include "Dog.h"
using namespace peng;

auto Dog::show() -> void {

    std::cout << i << " " << j << std::endl;
}

auto Dog::reset() -> void {
    i = j = 0;
}