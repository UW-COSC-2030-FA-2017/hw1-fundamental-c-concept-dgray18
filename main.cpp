/* 
 * File:   main.cpp
 * Author: dustin
 *
 * Created on September 5, 2017, 6:14 PM
 */

#include <iostream>
using namespace std;

class object {
public:
object();
~object();
};

object::object(void){
     std:cout << "constructor is run";
}
object::~object(void){
    std:cout << " object is deleted";
}

int main(){
    object object;
    return 0;
};