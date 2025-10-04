#include <iostream>
using namespace std;

//Q1. Find the Missing Number
void findMissing(int a[], int size){
    int i, j, temp = 0;
    //sorting
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout<<a[i];
    }
    //find the missing
    for(i=0; i<size; i++){
        if(a[i] != i){
            temp = i;
            break;
        }
    }
    cout<<"the missing element is :"<<temp;
}

//Q2. Remove Duplicates from Sorted Array
void removeDuplicates(int a[],int size){
    int i, j, numAtI=0;
    for(i=0; i<size;){
        numAtI = a[i];
        if(a[i] == numAtI && a[i+1] == numAtI){
            for(j=i; j<size; j++){
                a[j]= a[j+1];
            }
            size--;
        } else i++;
    }
    for(i=0; i<size; i++){
        cout<<a[i]<<"\n";;
    }
}

//Q3.  Maximum Subarray Sum (Kadane's Algorithm)
void maxSubArray(int a[], int size){
    int i, j, sum, max=0, maxAti=0, maxAtj=0;
    for(i=0; i<size; i++){
        sum = 0;
        for(j=i; j<size; j++){
            sum += a[j];
            if(sum > max){
                max = sum;
                maxAti = i;
                maxAtj = j;
            }
        } 
    }
    cout<<"[";
    for(i=maxAti; i<=maxAtj; i++){
        cout<<a[i]<<",";
    }
    cout<<"]";
}

//Q4. Merge Two Sorted Arrays
void mergeArrays(int a[], int b[], int m, int n){
    int i, j, temp, size3 = m+n;
    for(i=m, j=0; i<size3 && j<=n; i++, j++){
        a[i] = b[j];
        
    }
    cout<<"\n";
    for(i=0; i<size3; i++){
        for(j=i+1; j<size3; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i<size3; i++){
        cout<<a[i]<<" ";
    }
}

//Q5. Find the Single Number
void singleNumber(int a[], int size){
    int i, j, value=0;
    bool maxCount;
    for(i=0; i<size; i++){
        maxCount = false;
        for(j=0; j<size;j++){
            if(i!=j && a[i]==a[j]){
                maxCount = true; 
                break;
            }
        }
        if(!maxCount){
            value = a[i];
        }
    }
    cout<<value<<" is minimum.";
}

//Q6.  Product of Array Except Self
void productOfArrays(int a[], int size){
    int i, j, b[size]={1, 1, 1, 1};
    for (i=0; i<size; i++){
        for (j = 0; j<size; j++){
            if(i!=j){
                b[i]*=a[j];
            }
        }
        cout<<b[i]<<" ";
    }
}

//Q7.  Climbing Stairs
void climbingStairs(int size){
    int i, a=1, b=2, temp=0;
    if(size>=a){
    cout<<" 1 way required to climb the stairs of "<<size;
    } else if(size>=b){
    cout<<" 2 ways required to climb the stairs of "<<size;
    } else {
        for(i = 2; i<size; i++){
            temp = a+b;
            a = b;
            b = temp;
        }
    }
    cout<<temp<<" : ways required to climb the stairs of "<<size;
}

//Q8.  Reverse a String (In-place)
string reverseString(string s){
    int i, j, temp;
    for(j=0; s[j]!='\0';j++);
    j=j-1;
    for(i=0; i<j ;i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp; 
    }
    return s;
}

int main(){
    //Q1. Find the Missing Number
    int arr1[9] = {0,1,5,3,7,8,6,2,9}, size1 = 9;
    findMissing(arr1,size1);

    //Q2. Remove Duplicates from Sorted Array
    int arr2[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}, size2=10;
    removeDuplicates(arr2,size2);

    //Q3. Maximum Subarray Sum (Kadane's Algorithm)
    int arr3[]= {-2, 1, -3, 4, -1, 2, 1, -5, 4}, size3=9;
    maxSubArray(arr3,size3);

    //Q4. Merge Two Sorted Arrays
    int nums1 [10]= {1, 2, 3, 0, 0, 0}, nums2 [10]= {2, 5, 6}, m=3, n=3;
    mergeArrays(nums1,nums2,m,n);

    //Q5. Find the Single Number
    int arr6[]={2, 2, 1, 4, 1, 3, 1, 2, 2}, size6=9;
    singleNumber(arr6,size6);

    //Q6.  Product of Array Except Self
    int arr7[] ={1, 2, 3, 4}, size7=4;
    productOfArrays(arr7, size7); 

    //Q7.  Climbing Stairs
    int size8=5;
    climbingStairs(5);

    //Q8.  Reverse a String (In-place)
    string str1 = "hello";
    cout<<reverseString(str1);
}