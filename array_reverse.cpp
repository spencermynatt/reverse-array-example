#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int x;
	int y;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			cout << "enter 9 numbers" << " "; //tells this question to ask each new line
			cin >> arr[x][y]; //takes input an stores it into there
		}
		cout << endl;
	}
	//now to reverse the order

	for(int a = 2; a >= 0; a--) // its telling the second for loop to go times, 2, 1, 0
	{
		for (int b = 2; b >= 0; b--)  // b needs  to be 2 to because its going 2, 1, 0
		{
			cout << arr[a][b] << " "; //while this for loop is  going arr is plugging in the 
			//countdown 
		}
		cout << endl;
	}
}