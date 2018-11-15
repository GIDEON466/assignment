#include <iostream>

using namespace std;
int binarysearch(int arr[], int first, int last, int value);
int main()
{
  int myList[9]={7,8,11,13,14,16,19,24,32};

  int first = 0;
  int mylast = 9;
  int findthis=13;

  int resultloc = binarysearch(myList,findthis,first,mylast);

  if (resultloc == -1 )
    {
      cout << "number not found" <<endl;
    }
  else
    {
      cout <<" number is found in position " << resultloc + 1 << endl;
    }

    return 0;
}


int binarysearch(int arr[], int first, int last, int value)
{
    int mid;
    int position = -1;
    while(first <= last)
    {int mid=(first+last)/2;
        if(arr[mid]==value)
            position = mid;
        else if (arr[mid] < value)
            first = mid + 1;
        else
            last = mid - 1;

    }
    return position;
}
