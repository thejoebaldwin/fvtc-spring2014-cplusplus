#include <iostream>
#include <string>


using namespace std;


void swap(int,int,int*);
void prettyPrint(int*, int);
void linearSort(int*, int);
void bubbleSort(int*, int);

int main()
{
    //swap
    int a = 5;
    int b = 3;
    a = a + b;
    b = a - b;
    a = a - b;


    int numbers[] = {5,13, 7, 3, 11};
    bubbleSort(numbers, 5);


    return 0;



}

void swap(int a, int b, int* numbers)
{
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void prettyPrint(int* numbers, int length)
{
    cout << "{";
    for (int i = 0; i < length; i++)
    {
        if (i > 0)
        {
            cout << ",";
        }
        cout << numbers[i];
    }
    cout << "}" << endl;

}
void linearSort(int* numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (numbers[i] < numbers[j])
            {
                swap(i,j, numbers);
            }
        }
        prettyPrint(numbers, length);
    }

}
void bubbleSort(int* numbers, int length)
{
 bool sorted;

 do
 {
     sorted = true;
     for (int i = 0; i < length - 1; i++)
     {
         if (numbers[i] > numbers[i+1])
         {
             swap(i, i +1, numbers);
             sorted = false;
         }
     }
     prettyPrint(numbers, length);
 } while (!sorted);

}
