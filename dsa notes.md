
```cpp

 a = cin.get(); //use to get every keyboard input unlike cin>>a; and gives the output in ascii encoing whether it space or tab etc.



    //bitwise operators 
    




    //shift operator(left shift <<, right shift >>)
    eg. 
    
    left shift 
    5<<1 means we have to left shift 5 one time in binary which would generlly twice of 5 ie 10 in cases of small numbers.
       5<<2 means 2 time left shift would generally give two time twice of 5 ie 20.
      

    right shift >>
    5>>1 means we have to shift one bit to right in binary 
    generally we will divide 5 by 2 one time for ( 5>>1)
    if 5>>2 then will divide 5 by 2 two times

 #for both keft and right shift
 for positive numbers shift just add 0 in the left of binary number.(padding always adds 0 in left or right)
 for negativr numbers shift (padding) is dependent on compiler.
 
 call by value is a process when any variable make its copy and the copied variable can change its value but the main variable will be unaffected
 

 when we update smiliar stuff in arrray it actually update all the adress in array unlike variables
 

 //pointers
 arr[i]=*(arr+i) = i[arr]=*(i+arr)       //where i is any integer.
 
 cout<<array; //prints diffrent output on different data type like for the numbers it print address of first block; but for string it prints the whole string