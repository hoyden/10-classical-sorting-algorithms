/*
 选择排序
 逐步遍历选择最小的值按顺序放置
 O(n^2)
 */
#include<iostream>
#include<vector>

using namespace std;

vector<float> selectionSort(vector<float> data){
    float tmp;
    int min;
    for(int i = 0; i < data.size() - 1; i++){
        min = i;
        for(int j = i+1; j < data.size(); j++){
            if(data[j] < data[min]){
                min = j;
            }
        }

        if(min != i){
            tmp = data[min];
            data[min] = data[i];
            data[i] = tmp;
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
    vector<float> result = selectionSort(data);
    cout << "After Sort: " << endl;
    for(auto & item : result)
        cout << item << " ";
    cout << endl;
    return 0;
}