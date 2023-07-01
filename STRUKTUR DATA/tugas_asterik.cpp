
/////// ASTERIK ///////
#include <iostream>
using namespace std;

int main()
{
	int batas;
	cout<<"Masukkan Batas:"; cin>>batas;
	for(int a=1,b=0; a<=batas; ++a,b=0){
		for( int c=1; c<=batas-a; ++c)
		{
			cout<<" ";
		}
		
		while(b!=2*a-1)
		{
			cout<<"*";
			++b;
		}
		cout<<endl;
		
	}

	return 0;
}

/////// ORDO 3 X 2 /////////
#include <iostream>
using namespace std;

 int main() {
    int arr[3][2];
    
    cout << "Masukkan data " << endl;
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 2; b++) {
            cout << "masukan index ke - [" << a << "][" << b << "]: ";
            cin >> arr[a][b];
        }
    }

    cout << "\nData yang diinputkan: " << endl;
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 2; b++) {
        	cout << " ";
            cout << arr[a][b];
        }
        cout<<"\n";
    
    }

    return 0;
}
