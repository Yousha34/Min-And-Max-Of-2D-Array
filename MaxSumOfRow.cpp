#include<iostream>
using namespace std ;
int main (){

    int rows, col;

    cout << "Enter no of rows : " ;
    cin >> rows ;

    cout << "Enter no of colomns : " ;
	cin >> col ;

    cout << endl ;

    int arr[rows][col] ;
		
	for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >> arr[i][j] ;
		}
		
	}

    int max_sum = 0 ;
    int row_number ;

	cout << endl ;

    for( int i = 0; i < rows; i++ ){

        int sum = 0 ;

        for( int j = 0; j < col; j++ ){

            cout << arr[i][j] << " " ;
            sum = sum + arr[i][j] ;

        }

        if( sum > max_sum ){

            max_sum = sum ;
            row_number = i+1 ;
            
        }

        cout << endl ;

    }

    cout << "\nThe max sum is : " << max_sum << "\nThe row is : " << row_number ;

    return 0 ;
}