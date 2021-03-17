#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == ("       \n _===_ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(11111111) == ("       \n _===_ \n (.,.) \n<( : )>\n ( : ) \n")); 
    CHECK(snowman(33232124) == ("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) \n"));
    CHECK(snowman(12222212) == ("       \n _===_ \n\\(o.o)/\n ( : ) \n (\" \") \n"));
    CHECK(snowman(21111111) == ("  ___  \n ..... \n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(snowman(22111111) == ("  ___  \n ..... \n (...) \n<( : )>\n ( : ) \n"));
    CHECK(snowman(12211111) == ("       \n _===_ \n (o..) \n<( : )>\n ( : ) \n"));  
    CHECK(snowman(41111113) == ("  ___  \n (_*_) \n (.,.) \n<( : )>\n (___) \n"));
    CHECK(snowman(12344321) == ("       \n _===_ \n (O.-) \n (] [)\\\n ( : ) \n"));
    CHECK(snowman(43211234) == ("  ___  \n (_*_) \n (o_.)/\n<(> <) \n (   ) \n"));
    CHECK(snowman(44444444) == ("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) \n"));
    CHECK(snowman(14141414) == ("       \n _===_ \n (. -) \n<( : ) \n (   ) \n"));
    CHECK(snowman(11223344) == ("       \n _===_ \n (o,o) \n/(   )\\\n (   ) \n"));
    CHECK(snowman(43432121) == ("  ___  \n (_*_) \n\\(-_O) \n (] [)>\n ( : ) \n"));
    CHECK(snowman(12344444) == ("       \n _===_ \n (O.-) \n (   ) \n (   ) \n"));
    
    
}

TEST_CASE("length ERORRS check") {
    CHECK_THROWS(snowman(1));//length of the input is too short.
    CHECK_THROWS(snowman(111111111));//length of the input is too long. 
}

TEST_CASE("wrong input check"){

    CHECK_THROWS(snowman(1171231)); //length of input if GOOD but there is a number that greater then 4
    CHECK_THROWS(snowman(01112343)); //length of input is GOOD but there is number that is smaller then 1.
    CHECK_THROWS(snowman(-11111111));//input of a negative number.


}


