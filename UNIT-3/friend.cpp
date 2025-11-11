#include <iostream>
using namespace std;
Class A
{
private:
    int num;
public:
classA(int n);
{ 
    num=n;
}
    friend void display(classA onj);
};
void display(classA obj)
 {
    cout << "The value of num is:"<<obj.num<<endl;
}
int main() 
{
    classA obj 1(142);
    display(obj1);
    return 0;
}
