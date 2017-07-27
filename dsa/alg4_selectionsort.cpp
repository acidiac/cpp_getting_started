/**
 * @Author: Amit Chanchal <amit>
 * @Date:   21-Jun-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: alg4_selectionsort.cpp
 * @Last modified by:   amit
 * @Last modified time: 21-Jun-2017
 */
 //This is a C++ Program to Sort an Array using Selection Sort

 #include <iostream>
 using namespace std;

 int main ( )
{
	int data [] = { 7, 4, 1, 9, 2};
	int tmp;

	for (int i = 0; i < 5 -1; i++){

    for (int j = i+1; j < 5; j++){
			if (data[i] > data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
    }

  }

	for( int i = 0; i < 5; i++)
		cout << data[i] << " ";

	cout << endl;
	return 0;
}
