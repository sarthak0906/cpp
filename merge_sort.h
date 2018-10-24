#include<iostream>
#include<limits.h>
using namespace std;

//int no_of_changes =0;
void merge_sort(int arr[],int start,int end)
{
	
	int mid = (end+start)/2;
	if (end-start)
	{
		merge_sort (arr,start,mid);	
		merge_sort (arr,mid+1,end);
		int left_size = mid-start+1;
		int right_size = end-mid;
		left_size++;
		right_size++;
		int *left = new int [left_size];
		int *right = new int [right_size];
		for (int i =0;i<left_size ; ++i)
		{
			//cout << "value of start +i "<< start+i << "    ";
			left[i] = arr [start+i];
		}
		for (int i =0;i<right_size ; ++i)
		{
			//cout << "value of mid + 1+i "<< mid+1+i << "    ";
			right[i] = arr [mid+1+i];
		} 
		left[left_size-1] = INT_MAX;
		right[right_size-1] = INT_MAX;
		int j=0 , i =0 ;
		for (int k = start; k<=(end);++k)
		{
			if (left[i]<right[j])
			{
				arr[k]= left[i];
				i++;
			}
			else {
				arr[k] = right[j];
				j++;
				/*cout << "right [j]" << right[j] <<endl ;
				arr[k] = right[j];
				j++;
				no_of_changes ++;
				cout <<"arr[k]"<<arr[k]<<"     right[j]"<<right[j] << endl<< no_of_changes<<endl;
				for (int a =0 ;a<end ; ++a)
				{
					cout <<  arr[a]<< "   ";
				}*/
			}
		}
	}
	else return;
}
