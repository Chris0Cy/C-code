/* This program multiplies two matrixes for question 1 and 2. Multiply a matrix and vector for question 3*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


using namespace std;
const int N = 2;
void printArray(int arr[][N], int numRows){
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < N; j++){
            cout << arr[i][j] << "  ";
        }
        cout  << endl;
    }
}


int main ()
{
srand(time(NULL));      //seed for RNG
int A[N][N];
int B[N][N];
int X[N];
int question1[N][N];
int question2[N][N];
int question3[N];

double starting_time = omp_get_wtime();
double exec_time = omp_get_wtime();

//populate array A[]
for (int i = 0; i <N; i++){
    for (int j = 0; j < N; j++){
        A[i][j] = rand() % 10 + 1;
    }
}

//calculate exec time to popular array A
cout << "the time it takes to popular array A is " << endl;
exec_time = omp_get_wtime() - starting_time;
cout << exec_time;

for (int i = 0; i <N; i++){
    for (int j = 0; j < N; j++){
        B[i][j] = rand() % 10 + 1;
    }
}

//calculate exec time to popular array B
cout << "the time it takes to popular array B is " << endl;
exec_time = omp_get_wtime() - starting_time;
cout << exec_time;

//populating random array
for (int i = 0; i <N; i++){
    X[i] = rand() % 10 + 1;
}

//adding arrays : A+B
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
         question1[i][j] = A[i][j] + B[i][j];
    }
}

//calculate exec time to add array A and array B
cout << "the time it takes to add array A and array B is " << endl;
exec_time = omp_get_wtime() - starting_time;
cout << exec_time;

//multiplying arrays : A * B
    for (int i = 0; i< N; i++){
        for (int j = 0; j < N; j++){
            question2[i][j] = A[i][j] * B[i][j];

        }
    }

//calculate exec time to mutiply array A and array B
cout << "the time it takes to mutiply array A and array B is " << endl;
exec_time = omp_get_wtime() - starting_time;
cout << exec_time;

//A*X
    for (int i = 0; i < N; i++){
        for (int j= 0; j < N; j++){

        }
    }
//calculate exec time for A*X
cout << "the time it takes for A*X is " << endl;
exec_time = omp_get_wtime() - starting_time;
cout << exec_time;

//result for quesiton 1
cout << "Question 1: " << endl;
printArray(A, N);
cout << endl;
printArray(B,N);
cout << endl;
printArray(question1,N);
cout << endl;

//result for question 2
cout << "Question 2: " << endl;
printArray(A, N);
cout << endl;
printArray(B,N);
cout << endl;
printArray(question2,N);
cout << endl;

//result for question 2
cout << "Question 2: " << endl;
printArray(A, N);
cout << endl;
printArray(B,N);
cout << endl;
printArray(question2,N);
cout << endl;


return 0;
}
