#include <iostream>
using namespace std;

int main() {
    int ans=0;
    for(int i=0;i<10;i++){
        int num;
        cin >> num;
        if(i==2||i==4||i==9)
            ans+=num;
    }
    cout << ans;
    return 0;
}