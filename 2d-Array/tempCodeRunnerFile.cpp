    void printSum(int arr[][3],int row , int col ){
        cout<<"Printing the Sum ->"<<endl;
        for(int col = 0 ; col<3; col++){
            int sum = 0 ;
        for(int row = 0 ; row<3 ; row++){
            sum+=arr[row][col];
        }
        cout<<sum << " ";
    }
    }