#include <iostream>
#include <list>

int main() {
    srand(time(0));
    std::list<int> list;

    for(int i = 0; i<10; i++){
        list.push_back(rand()%1000);
    }
    return 0;
}
