#include <iostream>
#include <cmath>

using namespace std;



class Vector{
    int Xcoordinate;
    int Ycoordinate;

public:

    Vector() : Xcoordinate(0), Ycoordinate(0) {}
    
    Vector(int x, int y) : Xcoordinate(x), Ycoordinate(y) {}

    int getXcoordinate(){return Xcoordinate;}
    int getYcoordinate(){return Ycoordinate;}
    void getCoordinates(){cout << "(" << Xcoordinate << ", " << Ycoordinate << ")" << endl;}



    bool operator< (Vector &vector2){
        float x = sqrt(pow(Xcoordinate, 2) + pow(Ycoordinate, 2));
        float y = sqrt(pow(vector2.Xcoordinate, 2) + pow(vector2.Ycoordinate, 2));
        return  x < y;
    }
    bool operator> (Vector &vector2){
        float x = sqrt(pow(Xcoordinate, 2) + pow(Ycoordinate, 2));
        float y = sqrt(pow(vector2.Xcoordinate, 2) + pow(vector2.Ycoordinate, 2));
        return  x > y;
    }
    bool operator= (Vector &vector2){
        float x = sqrt(pow(Xcoordinate, 2) + pow(Ycoordinate, 2));
        float y = sqrt(pow(vector2.Xcoordinate, 2) + pow(vector2.Ycoordinate, 2));
        return  x = y;
    }

    Vector operator+ (Vector &vector2){
        Vector vector3(Xcoordinate + vector2.Xcoordinate, Ycoordinate + vector2.Ycoordinate);
        return vector3;
    }



};


int main(){

    Vector vector1(3,4);
    Vector vector2(6,8);

    cout << "Vector 1 = ";
    vector1.getCoordinates();
    cout << "Vector 2 = ";
    vector2.getCoordinates();

    cout << "Vector 3 = Vector 1 + Vector2 = "; 
    Vector vector3 = vector1 + vector2;
    vector3.getCoordinates();

    cout << endl;

    Vector vector4(13,14);
    Vector vector5(12,15);

    cout << "Vector 4 = ";
    vector4.getCoordinates();
    cout << "Vector 5 = ";
    vector5.getCoordinates();


    if (vector4 > vector5){ cout << "Vector 4 is greater than Vector 5" << endl;}
    else if (vector4 < vector5){ cout << "Vector 5 is greater than Vector 4" << endl;}
    else {cout << "Vector 4 is equal to Vector 5" << endl;}
    

}

