//
// Created by peng on 2025/10/25.
//

#include <iostream>
#include <memory>
#include "Dog.h"
#include "Cat.h"

auto main() -> int {

    std::cout << "main ..." << std::endl;

    auto dog = std::make_unique<peng::Dog>(3, 4);
    dog -> show();
    dog->reset();
    dog->show();

    auto cat = std::make_unique<peng::Cat>(33, 4);
    cat->show();
    return 0;
}