//
// Created by peng on 2025/10/25.
//

#ifndef CMAKEPROJECT1_CAT_H
#define CMAKEPROJECT1_CAT_H

namespace peng {
    struct Cat {
        int i;
        int j;
        auto show() -> void;

        // void reset();
        auto reset() -> void;

        Cat(int i, int j): i(i), j(j) {}
    };
}



#endif //CMAKEPROJECT1_CAT_H