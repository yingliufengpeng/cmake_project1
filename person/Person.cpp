//
// Created by peng on 2025/10/25.
//

#include <iostream>
#include "Person.h"


namespace peng {

    // 定义一个输出重载函数
    std::ostream& operator<<(std::ostream& os, const Person& p) {
        os << "Person(name=" << p.name << ", age=" << p.age << ")";
        return os;
    }
}


using namespace peng;

auto Person::setName(std::string&& _name) -> void {
    this->name = _name;
}
