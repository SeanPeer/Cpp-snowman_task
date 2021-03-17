#include <iostream>
#include <string>
#include <array>
#include "snowman.hpp"

using namespace std;
using namespace ariel;

const int lower_case = 11111111;
const int upper_case = 44444444;
const int asci_gap = 49;


string ariel::snowman(int num){
    string snowman = to_string(num);
    
    if(num < lower_case || num > upper_case){
        throw "The number is out of bound !";
    }

    for(int i = 0;i < snowman.length();i++){
        if(snowman.at(i) < '1' || snowman.at(i) > '4'){
            throw "The input has invalid digit !";
        }
    }

    array<string,4> hats = {"       \n _===_ \n","  ___  \n ..... \n","   _   \n  /_\\  \n","  ___  \n (_*_) \n"};
    array<string,4> nose = {",",".","_"," "};
    array<string,4> eye = {".","o","O","-"};
    array<string,4> left_arm = {"<","\\","/"," "};
    array<string,4> right_arm = {">","/","\\"," "};
    array<string,4> torso = {"( : )","(] [)","(> <)","(   )"};
    array<string,4> base = {" ( : ) \n"," (\" \") \n"," (___) \n"," (   ) \n"};

    string ans;

    ans += hats.at(snowman.at(0)-asci_gap); 

    string head;

    const int upleft_hand = 4;
    const int upright_hand = 5;

    if(snowman.at(upleft_hand) == '2'){
        head += left_arm.at(1);
    } else {head += " ";}

    head += "(" + eye.at(snowman.at(2)-asci_gap) + nose.at(snowman.at(1)-asci_gap) + eye.at(snowman.at(3)-asci_gap) + ")";
    if(snowman.at(upright_hand) == '2'){
        head += right_arm.at(1) +"\n";
    } else {head += " \n";}

    ans += head;

    if(snowman.at(upleft_hand) != '2'){
        ans += left_arm.at(snowman.at(upleft_hand)-asci_gap);
    } else {ans += " ";}

    const int torso_index = 6;
    const int base_index = 7;

    ans += torso.at(snowman.at(torso_index)-asci_gap);

    if(snowman.at(upright_hand) != '2'){
        ans += right_arm.at(snowman.at(upright_hand)-asci_gap) +"\n";
    } else {ans +=" \n";}

    ans+= base.at(snowman.at(base_index)-asci_gap);
    
    return ans;
}
