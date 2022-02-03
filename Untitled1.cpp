// template specialization
#include<iostream>
using namespace std;
template <class T>
class A
{
    T a, b;
public:
    A(T c)
    {
        cout<<c <<" is not a character"<<endl;
    }

};
template<> // Template specialization
class A<char>{
public:
    A(char X)
    {
        cout<<X <<" is a indeed character";
    }
};

int main()
{
    A <int> obj1(5);
    A <double> obj2(34.34);
    A <char> obj3 ('a');
}
