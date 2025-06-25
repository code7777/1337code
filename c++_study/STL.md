array indexing is commutive in c++
1[arr] = arr[1] = *(arr +1 )

example 
int arr[] = {10, 20, 30, 40};
*(arr + 1)  //  gives you 20
(*arr + 1) == 11    

to print an address of a char variable 

example
char ch =  'A';
std::cout << ???;

std::cout <<(void *)&ch;