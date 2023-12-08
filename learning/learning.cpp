#include <iostream>
#include <string>
#include <vector>
using namespace std;









void best_bab(int* arr) {
	arr[0] = 20;
}

struct car {
	string name;
	int price;
	double year = 0;

	 car(int x) {
		 name = "mhmd";
		 price = x;

	};

};

int main() {


	vector<int> arr(5, -2);

	arr.push_back(5);

	cout << arr[5];

	//int arr[] = { 1,2,3,4,5 };
	//best_bab(arr);
	//cout << arr[0];

	// lets learn pointers!!!!!

	//int* pos;
	//int x = 50;
	//pos = &x;
	//cout << "the first value of pos is: " << *pos << endl;
	//x = 20;
	//cout << "the second value of pos is: " << *pos << endl;
	//*pos = 44;
	//cout << "the third value of pos is: " << x << endl
	//int n = 20;
	//int* pos = new int[n];

	//pos[0] = 2;
	//pos[1] = 555;


	//cout << *(pos) << endl;



	

	//car pos(5);
	//car mhmd(8);
	//cout << pos.price;


	//int arr[5]={1,2,3,4,5};
	//arr[2] = 10;
	//
	//for (int i : arr) {
	//	cout << "arrays values:" <<i<< endl;
	//}


	/*string mhmd = "Hello" ;
	mhmd[1] = '4';
	string pos = mhmd + "wow";
	cout << pos << endl;*/

	/*char pos = 120;
	//cout << "our char is " << pos << endl;

	//std::string value;
	//cout << "please type a number: ";
	
	getline(cin, value);
	cout << "the entered value is :" << value<<endl;
	std::string temp = "hello my name is mohammed!";
	cout << temp[2] << endl;

	int x, y;
	x = y = 50;
	x = 10;
	cout << "the val of x is:" << x <<"and the val of y is:"<<y<< endl;


	cout << "hello world! \n";
	cout << "hello world!again";*/

	return 0;
}