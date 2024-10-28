#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <vector>
#include <stack>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <math.h>
#include <queue>
#include <iomanip>
#include <set>
#include <sstream>
using namespace std;



vector<vector<int>> multiply(const vector<vector<int>>& A, const vector<vector<int>>& B, int N) {
    vector<vector<int>> result(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % 1000;
            }
        }
    }
    return result;
}

// 항등 행렬 생성 함수
vector<vector<int>> identityMatrix(int N) {
    vector<vector<int>> identity(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        identity[i][i] = 1;
    }
    return identity;
}

// 분할 정복을 이용한 행렬 거듭제곱 함수
vector<vector<int>> matrixPower(vector<vector<int>> A, long long power, int N) {
    if (power == 0) {
        return identityMatrix(N); // B = 0일 때 항등 행렬 반환
    }
    if (power == 1) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                A[i][j] %= 1000;
            }
        }
        return A;
    }

    if (power % 2 == 0) {
        vector<vector<int>> halfPower = matrixPower(A, power / 2, N);
        return multiply(halfPower, halfPower, N);
    }
    else {
        vector<vector<int>> halfPower = matrixPower(A, (power - 1) / 2, N);
        return multiply(multiply(halfPower, halfPower, N), A, N);
    }
}

int main() {
    int N;
    long long B;
    cin >> N >> B;
    vector<vector<int>> arr(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> result = matrixPower(arr, B, N);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}