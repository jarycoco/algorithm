#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    freopen("input.txt","r",stdin);

    int N;
    int arr[1000];

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr,arr+N);


    for (int i = 0; i < N; i++)
        cout << arr[i] << endl;


    return 0;
}