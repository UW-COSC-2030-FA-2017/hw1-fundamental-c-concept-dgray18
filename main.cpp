#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;


class genericClass {
   public:
        int number;
        string name;
};
vector<genericClass> globalVector;

//functions
void notContained(){
cout << "this item is not contained" << endl;
}

//empties collection
void makeEmpty(){
    for(int i = 0; i < globalVector.size(); i++){
    globalVector.erase(globalVector.begin()+i);
    }
}

//inserts into vector
void insertVector(int item, string name){
    genericClass genericObject;
    genericObject.number = item;
    genericObject.name = name;
    globalVector.push_back(genericObject);
}


void vectorRemove(int position){
    if(position > globalVector.size()){
    notContained();
    }
    else if(position < 0){
    notContained();
    }
    else{
    globalVector.erase(globalVector.begin() + position);
    }
}

int removeRandom(){

    srand((unsigned)time(0));
    int randNum;

    randNum = (rand()%globalVector.size())+0;

    globalVector.erase(globalVector.begin() + randNum);
}


int main()
{


//    insertVector(genericObject);
    insertVector(0, "obj0");
    insertVector(1, "obj1");
    insertVector(2, "obj2");
    insertVector(3, "obj3");

    for(int i = 0; i < globalVector.size(); i ++){
    cout << globalVector[i].number << ": " << globalVector[i].name;
    }
    cout << endl;
    removeRandom();

        for(int i = 0; i < globalVector.size(); i ++){
    cout << globalVector[i].number << ": " << globalVector[i].name;
    }

    cout << endl;

    vectorRemove(19);
    vectorRemove(2);

        for(int i = 0; i < globalVector.size(); i ++){
    cout << globalVector[i].number << ": " << globalVector[i].name;
    }

    cout << endl;

    makeEmpty();

        for(int i = 0; i < globalVector.size(); i ++){
    cout << globalVector[i].number << ": " << globalVector[i].name;
    }


    return 0;
}
