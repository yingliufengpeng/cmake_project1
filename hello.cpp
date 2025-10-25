//
// Created by peng on 2025/10/25.
//

#include <iostream>
#include <memory>
#include "animal/Dog.h"

auto main() -> int {

    std::cout << "main ..." << std::endl;

    auto dog = std::make_unique<peng::Dog>(3, 4);
    dog -> show();
    dog->reset();
    dog->show();
    return 0;
}