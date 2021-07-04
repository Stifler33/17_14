#include <iostream>
bool substr(char* a, char* b){
    bool fullMatch = false;
    for (int i = 0; a[i] != '\0'; i++){
            for (int countB = 0, countA = i; b[countB] != '\0' && a[i] == b[0]; countB++, countA++){
                if (b[countB] != a[countA]){
                    break;
                }else if (b[countB+1] == '\0') fullMatch = true;
            }
    }
    return fullMatch;
}
int main(){
    char* a = "Barshka Bumbashku";
    char* b = "shku";
    if (substr(a,b)){
        std::cout << "yes";
    }else std::cout << "no";
    return 0;
}

