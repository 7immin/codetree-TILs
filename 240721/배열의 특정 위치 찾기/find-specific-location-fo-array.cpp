#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];
    for(int i=0;i<10;i++)
        cin >> arr[i];
    int even=0;
    double avg=0;
    int count=0;
    for(int i=0;i<10;i++){
        if((i+1)%2==0)
            even+=arr[i];
        else if((i+1)%3==0){
            avg+=arr[i];
            count++;
        }
    }
    avg=avg/count;
    cout << even << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}