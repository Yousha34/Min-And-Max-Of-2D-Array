#include<iostream>
using namespace std ;

int main(){

    int rows, col ;

    cout << "Enter no of rows : " ;
    cin >> rows ;

    cout << "Enter no of columns : " ;
    cin >> col ;

    cout << endl ;

    int arr[rows][col] ;

    for( int i = 0; i < rows; i++ ){

        for( int j = 0 ; j < col ; j++ ){
            cin >> arr[i][j] ;
        }
    }

    int max_sum = 0 ;
    int col_number ;

    cout << endl ;

    for( int j = 0; j < col; j++ ){

        int sum = 0 ;

        for( int i = 0; i < rows; i++ ){

            cout << arr[i][j] << " " ;
            sum = sum + arr[i][j] ;

        }

        if( sum > max_sum ){

            max_sum = sum ;
            col_number = j + 1 ;
            
        }

        cout << endl ;
    }

    cout << "\nThe max sum is: " << max_sum << "\nThe column is: " << col_number ;

    return 0 ;
}
