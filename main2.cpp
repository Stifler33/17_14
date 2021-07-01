#include <iostream>

int* turn(int* a){
    int c[10];
    for (int i = 9, j = 0; i >= 0; i--, j++){
        *(c + i) = *(a + j);
    }
    int* pc = c;
    return pc;
}

int main(){
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int* newArr = turn(arr);
   std::cout << *(newArr + 0) << " " << *(arr + 0);
    return 0;
}
