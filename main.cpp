//
// Created by peng on 2025/10/25.
//

#include <iostream>
#include <memory>
#include "Dog.h"
#include "Cat.h"
#include "Person.h"
#include "config/version.h"

auto main() -> int {

    std::cout << "main ..." << std::endl;

    auto dog = std::make_unique<peng::Dog>(3, 4);
    dog -> show();
    dog->reset();
    dog->show();

    auto cat = std::make_unique<peng::Cat>(33, 4);
    cat->show();

    auto p = std::make_unique<peng::Person>("pw" , 44);
    std::cout << *p << std::endl;

    p->setName("little dog");
    std::cout << *p << std::endl;

    std::cout << "Value is " << Value << std::endl;
    std::cout << "CMAKE_CXX_STANDARD is " << CMAKE_CXX_STANDARD << std::endl;

    return 0;
}