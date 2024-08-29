#include<iostream>
using namespace std ;
int main(){

    int rows, col ;

    cout << "Enter number of rows : " ;
	cin >> rows ;
	
	cout << "Enter no of colomns : " ;
	cin >> col ;
    
    cout << endl ;

    int arr[rows][col] ;
    
    for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >>arr[i][j] ;
		}
		
	}

    int min = arr[0][0] ;
    int max = arr[0][0] ;
    
    int index_min = 0, index_max = 0 ;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < col; j++) {

            if( arr[i][j] < min ){

                min = arr[i][j] ;
                index_min ++ ;

            }
            if( arr[i][j] > max ){

                max = arr[i][j] ;
                index_max ++ ;

            }

        }
        
    }

    cout << "\nMin is : " << min << "\nThe index of Min is : " << index_min ;
    cout << "\n\nMax is : " << max << "\nThe index of Max is : " << index_max ;

    return 0 ;

}