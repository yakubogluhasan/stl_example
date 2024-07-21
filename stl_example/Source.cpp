#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <stack>

/*int main() {
    std::stack<int> yigin;

    yigin.push(1);
    yigin.push(2);
    yigin.push(3);

    while (!yigin.empty()) {
        std::cout << yigin.top() << " ";
        yigin.pop();
    }
    std::cout << std::endl;

    return 0;
}*/



template <typename T>
class Kutu {
    T deger;
public:
    Kutu(T d) : deger(d) {}
    T getDeger() { return deger; }
};

int main() {
    Kutu<int> intKutu(5);
    Kutu<double> doubleKutu(5.5);

    std::cout << "intKutu: " << intKutu.getDeger() << std::endl;
    std::cout << "doubleKutu: " << doubleKutu.getDeger() << std::endl;
    return 0;
}

/*int main() {
    std::vector<int> sayilar = { 5, 3, 1, 4, 2 };
    std::cout << *sayilar.begin() << std::endl;

    std::sort(sayilar.begin(), sayilar.end(), std::greater<int>());

    for (int sayi : sayilar) {
        std::cout << sayi << " ";
    }
    std::cout << std::endl;

    return 0;
}*/



/*int main() {
    std::unordered_set<int> benzersizSayilar = { 3, 7, 7, 1, 2, 2 };

    for (int sayi : benzersizSayilar) {
        std::cout << sayi << " ";
    }
    std::cout << std::endl;

    return 0;
}*/

/*int main() {
    std::set<int> benzersizSayilar = { 1, 2, 2, 3, 4, 5, 5 };

    for (int sayi : benzersizSayilar) {
        std::cout << sayi << " ";
    }
    std::cout << std::endl;

    return 0;
}*/

/*int main() {
    std::vector<int> sayilar = { 1, 2, 3, 4, 5 };

    sayilar.pop_back();
    sayilar.push_back(6);

    for (int sayi : sayilar) {
        std::cout << sayi << " ";
    }
    std::cout << std::endl;

    return 0;
}*/

/*int main() {
    std::map<std::string, int> yaslar;
    yaslar["Ali"] = 25;
    yaslar["Ayse"] = 30;

    for (const auto& kisi : yaslar) {
        std::cout << kisi.first << " : " << kisi.second << std::endl;
    }

    return 0;
}*/
