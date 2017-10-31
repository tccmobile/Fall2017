//
// Created by Will Smith on 10/26/17.
//

#define CATCH_CONFIG_MAIN

#include "catch.hh"


#include "Child.h"

TEST_CASE("Child methods work as expected","[Child]"){

    Child girl("Sue",5,true);
    Child boy;


    SECTION("check changing name"){
        girl.setName("Barbara");
        boy.setName("Phil");

        REQUIRE(girl.getName()=="Barbara");
        REQUIRE(boy.getName()=="Phil");


    }

    SECTION("check changing age"){
        girl.setAge(6);
        boy.setAge(3);

        REQUIRE(girl.getAge()==6);
        REQUIRE(boy.getAge()==3);
    }

    SECTION("check play result"){
        girl.plays();
        boy.plays();

        REQUIRE(!girl.isHappy());
        REQUIRE(boy.isHappy());

    }


}