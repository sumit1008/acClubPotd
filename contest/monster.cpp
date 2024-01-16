#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

vector<vector<int>> proper_arrangement(int n, int m) {
    vector<vector<int>> grid(n, vector<int>(m, 0));
    int num = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            while ((i > 0 && is_prime(abs(num - grid[i - 1][j]))) ||
                (j > 0 && is_prime(abs(num - grid[i][j - 1])))) {
                ++num;
            }

            grid[i][j] = num;
            ++num;
        }
    }

    return grid;
}

void print_grid(const vector<vector<int>>& grid) {
    for (const auto& row : grid) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int test_case = 0; test_case < t; ++test_case) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid = proper_arrangement(n, m);

        print_grid(grid);
        cout << endl;
    }

    return 0;
}