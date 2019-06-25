/*
 插入排序
 从1开始遍历，将其插入目标序列的合适位置
 O(n^2)
 */
#include<iostream>
#include<vector>

using namespace std;

vector<float> insertSort(vector<float> data){
    float tmp;
    int min;
    for(int i = 1; i < data.size(); i++){

        tmp = data[i];
        int j = i;
        while(j>0 && tmp<data[j-1]){
            data[j] = data[j-1];
            j--;
        }
        if(j != i){
            data[j] = tmp;
        }
    }
    
    return data;
}

int main(){
    vector<float> data;
    data = {65.62, 72.79, 91.93, 43.70, 82.10, 46.54, 64.37, 33.17, 95.38, 38.38};
    cout << "Before Sort: " << endl;
    for(auto & i : data)
        cout << i << " ";
    cout << endl;
    vector<float> result = insertSort(data);
    cout << "After Sort: " << endl;
    for(auto & item : result)
        cout << item << " ";
    cout << endl;
    return 0;
}