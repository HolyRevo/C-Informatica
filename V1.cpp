#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string iN, iM, iK;

    srand(time(0));

    std::cout << "Cati tineri au venit?" << endl;
    getline(cin, iN);
    std::cout << "Cati arcasi trebuie minimum?" << endl;
    getline(cin, iM);
    std::cout << "Cati spadasini trebuie minimum?" << endl;
    getline(cin, iK);
    std::cout << endl;

    int N = stoi(iN);
    int M = stoi(iM);
    int K = stoi(iK);

    /*
    std::cout << N << endl;
    std::cout << M << endl;
    std::cout << K << endl;
    */

    if (M + K > N)
    {
        std::cout << -1 << endl;
        return 0;

    }

    int a[] {N, M, K};


    std::cout << a[0] << " ";
    std::cout << a[1] << " ";
    std::cout << a[2] << endl;



    for (int i = 0; i < N; i++) {
        int randomNumar = rand() % 5 + 1;
        std::cout << randomNumar << " ";
        randomNumar = rand() % 5 + 1;
        std::cout << randomNumar << endl;
    };


    return 0;
}
