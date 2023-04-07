#include <iostream>
#include <vector>

class Array {
private:
    std::vector<int> arr;
public:
    Array(std::initializer_list<int> list){
        arr = list;
    }
    void print() {
        for(int i : arr) {
            std::cout << i << " ";
        }
    }
};

int main() {
    Array d = {1,2,3,4,5};
    d.print();
    return 0;
}
