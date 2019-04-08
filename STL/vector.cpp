#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int a;
};

int n, m = 5;

int main() {
    vector<int> vec1;
    vector<double> vec2;
    
    // 사용자가 정의한 Node 구조체를 저장
    vector<Node> vec3;

    // 벡터의 초기 크기를 n으로 설정
    vector<int> vec4(n);

    // 벡터의 초기 크기를 n으로 설정하고 1로 초기화
    vector<int> vec5(n, 1);

    // 크기가 n*m인 2차원 벡터를 선언하고 0으로 초기화
    vector<vector<int>> vec6(n, vector<int>(m, 0));
    
    cout << "start program";

    return 0;
}