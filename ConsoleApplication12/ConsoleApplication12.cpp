//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool is_in_array(int value, const vector<int>& arr) {
//    for (int elem : arr) {
//        if (elem == value) return true;
//    }
//    return false;
//}
//
//int main() {
//    system("chcp 1251>null");
//    int M, N;
//    cout << "Введите размер массива A: ";
//    cin >> M;
//    vector<int> A(M);
//    cout << "Введите элементы массива A: ";
//    for (int i = 0; i < M; i++) cin >> A[i];
//
//    cout << "Введите размер массива B: ";
//    cin >> N;
//    vector<int> B(N);
//    cout << "Введите элементы массива B: ";
//    for (int i = 0; i < N; i++) cin >> B[i];
//
//    vector<int> result;
//
//    for (int i = 0; i < M; i++) {
//        if (!is_in_array(A[i], B) && !is_in_array(A[i], result)) {
//            result.push_back(A[i]);
//        }
//    }
//
//    cout << "Элементы A, которых нет в B: ";
//    for (int elem : result) cout << elem << " ";
//    cout << endl;
//
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool is_in_array(int value, const vector<int>& arr) {
//    for (int elem : arr) {
//        if (elem == value) return true;
//    }
//    return false;
//}
//
//int main() {
//    system("chcp 1251>null");
//    int M, N;
//    cout << "Введите размер массива A: ";
//    cin >> M;
//    vector<int> A(M);
//    cout << "Введите элементы массива A: ";
//    for (int i = 0; i < M; i++) cin >> A[i];
//
//    cout << "Введите размер массива B: ";
//    cin >> N;
//    vector<int> B(N);
//    cout << "Введите элементы массива B: ";
//    for (int i = 0; i < N; i++) cin >> B[i];
//
//    vector<int> result;
//    for (int i = 0; i < M; i++) {
//        if (!is_in_array(A[i], B) && !is_in_array(A[i], result)) {
//            result.push_back(A[i]);
//        }
//    }
//    for (int i = 0; i < N; i++) {
//        if (!is_in_array(B[i], A) && !is_in_array(B[i], result)) {
//            result.push_back(B[i]);
//        }
//    }
//
//    cout << "Уникальные элементы между A и B: ";
//    for (int elem : result) cout << elem << " ";
//    cout << endl;
//
//    return 0;
//}



#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 1251>null");
    int M, N;
    cout << "Введите размер массива A: ";
    cin >> M;
    vector<int> A(M);
    cout << "Введите элементы массива A: ";
    for (int i = 0; i < M; i++) cin >> A[i];

    cout << "Введите размер массива B: ";
    cin >> N;
    vector<int> B(N);
    cout << "Введите элементы массива B: ";
    for (int i = 0; i < N; i++) cin >> B[i];

    vector<int> result = A;
    result.insert(result.end(), B.begin(), B.end());

    cout << "Объединение массивов A и B: ";
    for (int elem : result) cout << elem << " ";
    cout << endl;

    return 0;
}
