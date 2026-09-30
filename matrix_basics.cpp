#include <iostream>

int main()
{
    int row, column;
    std::cout<<"Enter number of rows: ";
    std::cin>>row;
    std::cout<<"Enter number of columns: ";
    std::cin>>column;
    int arr[row][column];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<column; j++)
        {
            std::cout<<"Enter the element: ";
            std::cin>>arr[i][j];
        }
    }
    std::cout<<"Your matrix: \n";

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<column; j++)
        {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    int max = arr[0][0];

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<column; j++)
        {
            if (arr[i][j]>max) max = arr[i][j];
        }
    }
    std::cout<<"Greatest element in the metrix is: "<<max<<std::endl;

    int min = arr[0][0];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<column; j++)
        {
            if (arr[i][j]<min) min = arr[i][j];
        }
    }
    std::cout<<"Smallest element in the matrix is: "<<min<<std::endl;

    std::cout<<"Greatest elements per row are: \n";
    for(int i = 0; i<row; i++)
    {
        int max_per_row = arr[i][0];
        for(int j = 0; j<column; j++)
        {
            if (arr[i][j]>max_per_row)
            {
                max_per_row = arr[i][j];
            }
        }
        std::cout<<max_per_row<<"\n";
    }

    std::cout<<"Smallest elements per row are: \n";
    for(int i = 0; i<row; i++)
    {
        int min_per_row = arr[i][0];
        for(int j = 0; j<column; j++)
        {
            if (arr[i][j]<min_per_row)
            {
                min_per_row = arr[i][j];
            }
        }
        std::cout<<min_per_row<<std::endl;
    }

    std::cout<<"Sum of all elements in the matrix is: ";
    int sum = 0;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<column; j++)
        {
           sum += arr[i][j]; 
        }
    }
    std::cout<<sum<<std::endl;

    std::cout<<"Largest elements in each column are: \n";
    for(int j = 0; j<column; j++)
    {
        int max_per_column = arr[0][j];
        for(int i = 0; i<row; i++)
        {   
            if(arr[i][j]>max_per_column) max_per_column = arr[i][j];
        }
        std::cout<<max_per_column<<"\n";
    }

    std::cout<<"Smallest elements in each column are: \n";
    for(int j = 0; j<column; j++)
    {
        int min_per_coulmn = arr[0][j];
        for(int i = 0; i<row; i++)
        {
            if(arr[i][j]<min_per_coulmn) min_per_coulmn = arr[i][j];
        }
        std::cout<<min_per_coulmn<<"\n";
    }
}
