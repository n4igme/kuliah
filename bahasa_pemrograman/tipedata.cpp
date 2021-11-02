#include <iostream>
using namespace std;
int main(){
    short a = 10;
    int b = 50000;
    long c = 50000;
    float d = 45.5;
    double e = 12345678.90123456;
    bool f = true;
    char g = 'A';

    cout<<"short a = "<< a <<", ukuran : " << sizeof(a) << "byte" <<endl;
    cout<<"int b = "<< b <<", ukuran : " << sizeof(b) << "byte" <<endl;
    cout<<"long c = "<< c <<", ukuran : " << sizeof(c) << "byte" <<endl;
    cout<<"float d = "<< d <<", ukuran : " << sizeof(d) << "byte" <<endl;
    cout<<"double e = "<< e <<", ukuran : " << sizeof(e) << "byte" <<endl;
    cout<<"bool f = "<< f <<", ukuran : " << sizeof(f) << "byte" <<endl;
    cout<<"char g = "<< g <<", ukuran : " << sizeof(g) << "byte" <<endl;
}