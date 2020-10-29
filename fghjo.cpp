#include <iostream>
#include<cstdlib>
using namespace std;

class Rectangle{
public:
    float length;
    float width;
    void setLength(){
        length = rand()%10;
    };
    void setWidth(){
        width = rand()%10;
    };
    void getLength(){
        cout<<length<<endl;
    };
    void getWidth(){
        cout<<width<<endl;
    };

};

int main(){
    Rectangle *rect = new Rectangle[3];
    for(int i = 0; i<3; ++i){
        rect[i].setLength();
        rect[i].setWidth();
        rect[i].getLength();
        rect[i].getWidth();
    }

    return 0;
}


