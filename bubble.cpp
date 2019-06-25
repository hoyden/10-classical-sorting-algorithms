/*
 冒泡排序
 每次比较相邻的大小
 O(n^2)
 */
#include<iostream>
#include<vector>

using namespace std;

vector<float> bubbleSort(vector<float> data){
    float tmp;
    int flag;
    //cout << data.size() << endl;
    for(int i = 1; i < data.size(); i++){
        flag = 1;
        for(int j = 0; j < data.size() - i; j++){
            if(data[j] > data[j+1]){
                flag = 0;
                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
        if(flag)
            return data;
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
    vector<float> result = bubbleSort(data);
    cout << "After Sort: " << endl;
    for(auto & item : result)
        cout << item << " ";
    cout << endl;
    return 0;
}