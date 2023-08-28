#include <iostream>
#include <ctime>
using namespace std;

long long int fibonacci(long long int);

int main(){
    clock_t start, end;
    start = clock();
    cout << "Result: " << fibonacci(50ll) << "\n";
    end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds." << endl;
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(long long int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}