#include <iostream>
using namespace std;
struct rectangle
{
    float length;
    float width;

};

void insertR(rectangle &r){
    r.length=3.3;
    r.width= 3;
}

void getA(rectangle &r){


    cout<<r.length* r.width;
}
int main()
{
    rectangle r;
    insertR(r);
    getA(r);
    return 0;
}
