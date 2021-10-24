#include <iostream>

int main() {

        int a = 0;
        int silnia = 1;
        int i = 1;

        std::cout<<"Liczba - silnia: ";
        std::cin>>a;

while (i <= a) {
        silnia *=i;
        ++i;
}

std::cout << " Silnia: " << silnia;

return 0;

}


