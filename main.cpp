#include <iostream>
void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main() {
    int a = 5;
    int b = 1;
    swap(&a,&b);
    std::cout << a << " " << b;
    return 0;
}
