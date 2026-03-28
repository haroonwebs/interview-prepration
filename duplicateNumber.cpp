#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicate(int arry[], int size){
    vector<int> result;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++){
            if(arry[i] == arry[j]){
                // avoid duplicate entries
                bool exists = false;
                for(int x : result){
                    if(x == arry[i]){
                        exists = true;
                        break;
                    }
                }
                if(!exists){
                    result.push_back(arry[i]);
                }
            }
        }
    }
    return result;
}

int main(){
    int arry[] = {2, 5, 8, 10, 9, 11, 12, 5, 2, 44};
    int size = sizeof(arry) / sizeof(arry[0]);

    vector<int> dup = findDuplicate(arry, size);

    cout << "Duplicates: ";
    for(int x : dup){
        cout << x << " ";
    }
}