// https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort



void bubbleSort(int arr[], int n) {
        // Your code here
        for(int i=n-1; i>=0; i--){
                
            bool swapped =0;
            
            for(int j =0; j<=i-1; j++){
                if(arr[j]>arr[j+1]){
                    swapped = 1;
                    swap(arr[j], arr[j+1]);
                }
            }
            if(swapped ==0)
                break;
            
        }
    }