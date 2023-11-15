#define USING_NAMESPACE_CSTL

#include "../prelude.h"
#include "../iterator.h"
#include "../format.h"
#include "../memory.h"



i32 main(void) {
    Split mut iter = str_split(
        str("String, splitted, with, commas"),
        str(", ")
    );

    iter_foreach(iter, substring, {
        println("{str}", substring);
    });

    return EXIT_SUCCESS;
}