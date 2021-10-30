#include <iostream>

using namespace std;
class human{
    public:
    human(){
        cout<<"Constructor is called";
    }
    ~human(){
        cout<<"destructor is called";
    }
};
int main() {
    human *anil;
    anil = new human();
    delete anil;  // when we delete a object a distructor will be called
    return 0;
}
