#include <iostream>
bool substr(char* a, char* b){
    bool finish = false;
    for (int i = 0; a[i] != '\0'; i++){
            for (int countB = 0, countA = i; b[countB] != '\0' && a[i] == b[0]; countB++, countA++){
                if (b[countB] != a[countA]){
                    finish = false;
                    break;
                }else finish = true;
            }
    }
    return finish;
}
int main(){
    char* a = "nuSuper mup";
    char* b = "up";
    char* c = "Sup";
    char* d = "nut";
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

