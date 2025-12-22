// https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort

int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i =0; i<n-1; i++){
           int index = i;
           for(int j=i+1; j<n; j++){
               if(arr[j] < arr[index]){
                   index =j;
               }
               
           }
           swap(arr[i], arr[index]);
       }
    }
    