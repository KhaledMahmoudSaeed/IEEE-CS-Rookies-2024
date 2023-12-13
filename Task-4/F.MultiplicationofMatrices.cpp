#include<iostream>
using namespace std;

int main() {
    int r1,
    c1;
    cin>>r1>>c1;
    int arr1[r1][c1];

    for(int i=0; i<r1; i++) {
        for(int y=0; y<c1; y++) {
            cin>>arr1[i][y];
        }
    }

    int r2,
    c2;
    cin>>r2>>c2;
    int arr2[r2][c2];

    for(int i=0; i<r2; i++) {
        for(int y=0; y<c2; y++) {
            cin>>arr2[i][y];
        }
    }

    int result[r1][c2];

    for(int i=0; i<r1; i++) {
        for(int y=0; y<c2; y++) {
            result[i][y]=0;
        }
    }

    for(int i=0; i<r1; i++) {
        for(int y=0; y<c2; y++) {
            for(int x=0; x<c1; x++) {
                result[i][y]+=arr1[i][x] * arr2[x][y];

            }
        }
    }

    for(int i=0; i<r1; i++) {
        for(int y=0; y<c2; y++) {
            cout<<result[i][y]<<" ";
        }

        cout<<endl;
    }
}
