#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<int> nums ={2,1,3,7,8};
    vector<int> target_indices;
    int target =9;

    for (int i = 0 ; i < nums.size(); i++){
        for(int j = i+1 ; j < nums.size(); j++){
            if (target == nums.at(i)+nums.at(j)){
                target_indices.push_back(i);
                target_indices.push_back(j);
                break;
            }

        }

    }
return target_indices;

    return 0;
}
