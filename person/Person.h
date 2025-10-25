//
// Created by peng on 2025/10/25.
//

#ifndef CMAKEPROJECT1_PERSON_H
#define CMAKEPROJECT1_PERSON_H
#include <string>

namespace peng {
    struct Person {
        std::string name;
        int age;

        auto getName() -> std::string&& {
            return std::move(name);
        }

        auto getAge() -> int& {
            return age;
        }

        explicit Person(std::string&& name, int age): name(std::move(name)), age(age) {}

        auto setName(std::string&&) -> void;
    };

    std::ostream& operator<<(std::ostream& os, const Person& p);

}


#endif //CMAKEPROJECT1_PERSON_H