#include <iostream>
using namespace std;


void sum(int **array, int n){
    int otvet = 0;
    for (int i=0; i <=n; i++){
        otvet += array[i][i];
        cout<<otvet<<endl;
    }
}

void enter(int **array, int n, int m){
    for(int i =0; i < n; i++){
        for(int j = 0; j<m; j++){
            array[i][j] = rand() % 101 + 0;
        }
    }
}

void outt(int **array, int n, int m){
    for (int i =0; i < n; i++){
        for (int j=0; j < m; j++){
            cout<<array[i][j]<< " ";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    int m;
    cout << "Enter size: ";
    cin >> n;
    cin >> m;

    int **array = new int*[n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[m];
    }


    enter(array, n, m);
    outt(array, n, m);
    sum(array, n);
    int sum = 0;
    for (int i=0;i<n;i++) {
        sum += array[i][n - 1 - i];
    }
    cout << "Summa:" << sum << endl;


    delete [] array;
    return 0;
}