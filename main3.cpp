#include <iostream>
int lenA;
int lenB;
bool substr(char* a, char* b){
    bool finish = false;
    for (int i = 0; i < lenA && !finish; i++){
        if (a[i] == b[0]){
            for (int countB = 0, countA = i; countB < lenB; countB++, countA++){
                if (b[countB] != a[countA]){
                    finish = false;
                    break;
                }else finish = true;
            }
        }
    }
    return finish;
}
int main(){
    char* a = "nut surer mus";
    char* b = "up";
    char* c = "Sup";
    char* d = "nut";
    for (lenA = 0; a[lenA] != '\0'; lenA++);
    for (lenB = 0; b[lenB] != '\0'; lenB++);
    if (substr(a,b)){
        std::cout << "1 yes" << "\n";
    }
    if (substr(a,c)){
        std::cout << "2 yes" << "\n";
    }
    if (substr(a,d)){
        std::cout << "3 yes" << "\n";
    }
    return 0;
}

