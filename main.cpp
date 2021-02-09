#include <vector>
#include "tsp.hpp"

int main() {

    const double INF = get_forbidden_cost();

    // PRZYKŁADOWE MACIERZE DO ROZWIĄZANIA PRZEZ ALGORYTM
    
    std::vector<std::vector<double>> cost_matrix{
            {INF, 10,  8,   19,  12},
            {10,  INF, 20,  6,   3},
            {8,   20,  INF, 4,   2},
            {19,  6,   4,   INF, 7},
            {12,  3,   2,   7,   INF}
    };

    std::vector<std::vector<double>> mat2 {
            {INF,  3.0,  4.0,  2.0,  7.0},
            {3.0,  INF,  4.0,  6.0,  3.0},
            {4.0,  4.0,  INF,  5.0,  8.0},
            {2.0,  6.0,  5.0,  INF,  6.0},
            {7.0,  3.0,  8.0,  6.0,  INF},
    };

    std::vector<std::vector<double>> mat3 {
            {INF, 29, 82, 46, 68, 52, 72, 42, 51, 55, 29, 74, 23, 72, 46 },
            { 29, INF, 55, 46, 42, 43, 43, 23, 23, 31, 41, 51, 11, 52, 21},
            { 82, 55, INF, 68, 46, 55, 23, 43, 41, 29, 79, 21, 64, 31, 51},
            { 46, 46, 68, INF, 82, 15, 72, 31, 62, 42, 21, 51, 51, 43, 64},
            { 68, 42, 46, 82, INF, 74, 23, 52, 21, 46, 82, 58, 46, 65, 23},
            { 52, 43, 55, 15, 74, INF, 61, 23, 55, 31, 33, 37, 51, 29, 59},
            { 72, 43, 23, 72, 23, 61, INF, 42, 23, 31, 77, 37, 51, 46, 33},
            { 42, 23, 43, 31, 52, 23, 42, INF, 33, 15, 37, 33, 33, 31, 37},
            { 51, 23, 41, 62, 21, 55, 23, 33, INF, 29, 62, 46, 29, 51, 11},
            { 55, 31, 29, 42, 46, 31, 31, 15, 29, INF, 51, 21, 41, 23, 37},
            { 29, 41, 79, 21, 82, 33, 77, 37, 62, 51, INF, 65, 42, 59, 61},
            { 74, 51, 21, 51, 58, 37, 37, 33, 46, 21, 65, INF, 61, 11, 55},
            { 23, 11, 64, 51, 46, 51, 51, 33, 29, 41, 42, 61, INF, 62, 23},
            { 72, 52, 31, 43, 65, 29, 46, 31, 51, 23, 59, 11, 62, INF, 59},
            { 46, 21, 51, 64, 23, 59, 33, 37, 11, 37, 61, 55, 23, 59, INF}
    };
    
    // URUCHOMIENIE ALGORYTMU
    std::vector<int> best_path = tsp(mat3);
    int dl = best_path.size();
    for(int i=0; i < dl-1; i++){
        std::cout << best_path[i] <<", ";
    }
    std::cout<<best_path[dl-1];

}