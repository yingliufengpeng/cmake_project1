//
// Created by peng on 2025/10/25.
//

#ifndef CMAKEPROJECT1_DOG_H
#define CMAKEPROJECT1_DOG_H

namespace peng {
    struct Dog {
        int i;
        int j;
        auto show() -> void;

        // void reset();
        auto reset() -> void;

        Dog(int i, int j): i(i), j(j) {}
    };
}



#endif //CMAKEPROJECT1_DOG_H