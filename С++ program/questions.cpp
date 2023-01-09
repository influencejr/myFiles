#include <iostream>
#include <vector>

int main(){
    int array[10] = {1,2,3,5,5,7,8,9,1,2};
    int target = 12;
    std::vector<int> result;

    for(int i = 0; i < 10; ++i){
        if(array[i] + array[i+1] == target){
            result.push_back(array[i]);
            result.push_back(array[i+1]);
        }
    }
    for(int k = 0; k < 2; ++k)
        std::cout << result[k] << std::endl;
}