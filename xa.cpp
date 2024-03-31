#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // ���������� ������ ������ �������� ��� ������� ����
    vector<vector<int>> adjacency_list(N);

    // ������� ���������� ��� ������ �� ������ ������ ��������
    for (int i = 0; i < M; i++) {
        int Ai, Bi;
        cin >> Ai >> Bi;
        adjacency_list[Ai - 1].push_back(Bi);
        adjacency_list[Bi - 1].push_back(Ai);
    }

    // �������� ���������
    for (int i = 0; i < N; i++) {
        int di = adjacency_list[i].size();
        sort(adjacency_list[i].begin(), adjacency_list[i].end());
        cout << di;
        for (int j = 0; j < di; j++) {
            cout << " " << adjacency_list[i][j];
        }
        cout << endl;
    }

    return 0;
}
