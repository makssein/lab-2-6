#include <iostream>
#include <vector>

void quickSort(int a, int b, std::vector<int>& mas) {
    if (a >= b) {
        return;
    }
    int m, k, l, r;
    m = rand() % (b - a + 1) + a;
    k = mas[m];
    l = a - 1;
    r = b + 1;
    while (1) {
        do {
            l = l + 1;
        } while (mas[l] < k);

        do {
            r = r - 1;
        } while (mas[r] > k);
        if (l >= r)
            break;

        std::swap(mas[l], mas[r]);
    }
    r = l;
    l = l - 1;
    quickSort(a, l, mas);
    quickSort(r, b, mas);
}

int binarySearch(std::vector<int>& mas, int s, int n, int k){
    if(k==mas[s]) return 0;

    int a = s;
    int b = n;

    while(a+1<b){
        int c = (a+b) / 2;

        if(k>mas[c]) a = c;
        else b = c;
    }

    if(mas[b] == k) return b;
    else return -1;
}

int main() {
    srand(time(0));

    std::vector<int> mas;

    for(int i = 0; i < 10; i++){
        mas.push_back(rand()%1000);
    }
    quickSort(0, mas.size(), mas);

    for (auto& element : mas){
        std::cout << element << " ";
    }
    std::cout << std::endl;

    mas.emplace(mas.begin()+5, 999);
    mas.erase(mas.begin()+5);

    int number = rand()%1000;

    std::cout << binarySearch(mas,0,mas.size(),number);

    return 0;
}
