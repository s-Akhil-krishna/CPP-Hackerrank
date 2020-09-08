
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

#include<bits/stdc++.h>

using namespace std;

class Box{
    private:
    //data items are supposed to be private in cpp standard conventions
    int l,b,h;

    public:
    Box(){ // default constructor:without any arguments
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length,int breadth,int height){
        //parameterised constructor
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& box){ //parameter is the object we need to copy from
        //copy constructor
        l = box.l;
        b = box.b;
        h = box.h;
    }

    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }    
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        // typecasting (smaller to larger)
        return (long long)l*b*h;
    }
    //general operator overloading in cpp: Arguments are (this,anotherObject)
    bool operator<(const Box& b){
        Box a(*this);//copy constructor => creating an object for convinience.
        if (a.l < b.l)return true;
        if (a.l == b.l && a.b < b.b)return true;
        if (a.l==b.l && a.b == b.b && a.h < b.h)return true;
        return false; 
    }
    // output stream operator overloading
    friend ostream& operator<<(ostream& output,const Box& box){
        output << box.l << " " << box.b << " " << box.h ;
        return output;
    } 
};

