#include<iostream>
using namespace std;

//函数对象
template<typename T>
struct test{
    void operator()(T & e){
        e++;
    }
};

template<class T>
class vector
{
    public:
    T a;
    vector(T temp){
        a = temp;
    }
    void dayin(){
        cout<<a<<endl;
    }
    void duixiang( T & test){
        test(a)
    }
};
int main(){
    vector<int> new_vector(2);
    new_vector.dayin();
    test<int> new_test;
    new_vector.duixiang(new_test);
    new_vector.dayin();
}