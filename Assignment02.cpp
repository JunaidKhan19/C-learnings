#include <iostream>
using namespace std;

int main(){
    //Arrays

    //Q1. Rotate Array Elements
    int a[8] = {1,2,3,4,5,6,7,8}, size = 8, temp;
    temp = a[0];

    for(int i = 0; i<=size-1; i++){
        a[i] = a[i+1];
    }
    a[size-1]=temp;

    cout<<"rotated array is : ";
    for(int i = 0; i<=size-1; i++){
        cout<<a[i];
    }

    //Q2. Merge Two Arrays
    int numbers1[3] = {1, 2, 3}, numbers2[3] = {4, 5, 6}, numbers3[6], size1=3, size2=3, size3=0;
    for(int i = 0; i<=size1-1; i++){
        numbers3[i] = numbers1[i];
        cout<<numbers3[i]<<" ";
        size3=i+1;
    }
    cout<<"=";
    for(int i = size3, j=0; i < size1+size2 && j<=size2; i++ , j++){
        numbers3[i] = numbers2[j];
        cout<<"arr ["<<i<<"] :"<<numbers3[i]<<" ";
    }

    //Q3. Reverse an Array
    int straight[5] = {1, 2, 3, 4, 5}, temp, i, j, size = 5;
    for(i = 0, j=size-1 ; i<=size-1 && j>=0 ; i++, j--){
        if(i == j){
            break;
        } else {
            temp = straight[i];
            straight[i] = straight[j];
            straight[j] = temp ;
        }
    }
    for(i = 0; i<size ; i++){
        cout<<straight[i];
    }

    //Q4. Find Second Largest Element
    int arr[5] = {10, 5, 8, 20, 15}, largest = arr[0], secondLargest = 0, size = 5, i;
    for(i = 0; i<=size-1; i++){
        if(arr[i]>largest && arr[i]>secondLargest){
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        } else {
            continue;
        }
    }
    cout<<"largest ="<< largest
        <<"\nsecond largest ="<<secondLargest;

    //Q5. Count Occurrences
    int arr5[50],size,count = 0, i, num;//50 is the maximum size given. The user can enter anything up to 50. 
    cout<<"\nEnter size of array:";
    cin>>size;
    
    cout<<"\nEnter "<<size<<" elements.";
    for(i=0;i<size;i++)
    {
        cout<<"\neneter element at a["<<i<<"] :";
        cin>>arr5[i];
    }

    cout<<"\nEntered "<<size<<" elements are ";
    for(i=0;i<size;i++)
    {
        cout<<arr5[i]<<" ";
    }  
    cout<<"\nEnter the number to count: ";
    cin>>num;
    for(i=0; i<=size-1; i++){
        if(arr5[i]==num) count++;
        else continue;
    } 
    cout<<num<<" appeared : "<< count<<" times";


    //Strings

    //Q1. Find the most frequent character
    string str1 = "Success consists of a series of daily victories";
    char singleChar, alphabets[26];
    int i, j,count[26], size = 0, largest=0, largestAt = 0;
    bool flag = false;
    for(i=0; str1[i]!= '\0'; i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i] = str1[i] + 32;
        }
        else continue;
    }
    for(i=0; str1[i]!='\0'; i++){
        flag = false;
        singleChar= str1[i];
        if(singleChar == ' ') continue;
        for(j=0; j<size; j++){
            if(singleChar == alphabets[j]){
                count[j] += 1; 
                flag = true;
                break;
            }
        }
        if(!flag){
            alphabets[size]= singleChar;
            count[size] = 1;
            size++;
        }
    }
    for(i=0; i<size; i++){
        if(count[i]>largest){
            largest = count[i];
            largestAt = i;
        } else continue;
    }
    cout<<"the most frequent character is "<<alphabets[largestAt]<<" apearing "<<largest<<" times";

    //Q2. Check for Anagrams
    string line = "listen", line2 = "silent";//anagram true
    //string line = "string", line2 = "silent";//anagram false
    int i,j,size;
    bool flag = true;
    for(j=0;line[j]!='\0';j++);
    size = j-1;
    for(i=0; i<size; i++){
        for(j=0; j<size-i; j++){
            if(line[j]>line[j+1]){
                int temp=line[j];
                line[j]=line[j+1];
                line[j+1]=temp;
            }
        }
    }
    for(i=0; i<size; i++){
        for(j=0; j<size-i; j++){
            if(line2[j]>line2[j+1]){
                int temp=line2[j];
                line2[j]=line2[j+1];
                line2[j+1]=temp;
            }
        }
    }
    for(i=0; i<size; i++){
        if(line[i] == line2[i]) {
            flag = true;
            continue;
        }else {
            flag = false;
            break;
        }
    }
    cout<<(flag?"the provided sentences are anagrams":"the sentence are not anagrams");

    //Q3. Count words
    string str3= "C++ is a powerful language";
    int i, countword = 0;
    for(i=0; str3[i]!='\0';i++){
        if(str3[i] == ' '){
            countword++ ;
        } else continue;
    }
    cout<<"there are "<<countword+1<<" words in the sentence";

    //Q4. Toggle Case of Characters
    string str4 = "Hello World";
    int i;
    for(i=0; str4[i]!= '\0'; i++){
        if(str4[i]>='A' && str4[i]<='Z'){
            str4[i] = str4[i] + 32;
        }
        else if(str4[i]>='a' && str4[i]<='z'){
            str4[i] = str4[i] - 32;
        }
        else continue;
    }
    cout<<str4;

    //Q5. Remove a Specific Character
    string str5 = "Programming";
    int i,j;

    for(i=0; str5[i]!= '\0'; i++){
        if(str5[i] == 'g'){
            for(j=i; str5[j]!='\0'; j++){
                str5[j] = str5[j+1];
            }
        } 
        
    }
    cout<<str5;

    return 0;
}