#include <iostream> 
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
	char born,atn [3];
	cout << "   A==>臺北市   G==>宜蘭縣   M==>南投縣   S==>高雄縣   Y==>陽明山   B==>臺中市\n   H==>桃園縣   N==>彰化縣";
	cout << "   T==>屏東縣   Z==>連江縣   C==>基隆市   I==>嘉義市\n   O==>新竹市   U==>花蓮縣   D==>臺南市   J==>新竹縣";
	cout << "   P==>雲林縣   V==>臺東縣\n   E==>高雄市   K==>苗栗縣   Q==>嘉義縣";
	cout << "   W==>金門縣   F==>新北市   L==>臺中縣\n   R==>台南縣   X==>澎湖縣"<<endl;
	cout << "請輸入你要是哪個地區登記出生的(輸入大寫英文字母即可):";
	cin >> born;
	
	switch (born){
		case 'A':
			atn[1] = 49;
			atn[2] = 48;
			cout << "A";
			break;
		case 'B':
			atn[1] = 49;
			atn[2] = 49;
			cout << "B";
			break;
		case 'C':
			atn[1] = 49;
			atn[2] = 50;
			cout << "C";
			break;
		case 'D':
			atn[1] = 49;
			atn[2] = 51;
			cout << "D";
			break;
		case 'E':
			atn[1] = 49;
			atn[2] = 52;
			cout << "E";
			break;
		case 'F':
			atn[1] = 49;
			atn[2] = 53;
			cout << "F";
			break;
		case 'G':
			atn[1] = 49;
			atn[2] = 54;
			cout << "G";
			break;
		case 'H':
			atn[1] = 49;
			atn[2] = 55;
			cout << "H";
			break;
		case 'J':
			atn[1] = 49;
			atn[2] = 56;
			cout << "J";
			break;
		case 'K':
			atn[1] = 49;
			atn[2] = 57;
			cout << "K";
			break;
		case 'L':
			atn[1] = 50;
			atn[2] = 48;
			cout << "L";
			break;
		case 'M':
			atn[1] = 50;
			atn[2] = 49;
			cout << "M"; 
			break;
		case 'N':
			atn[1] = 50;
			atn[2] = 50; 
			cout << "N";
			break;
		case 'P':
			atn[1] = 50;
			atn[2] = 51;
			cout << "P";
			break;
		case 'Q':
			atn[1] = 50;
			atn[2] = 52;
			cout << "Q";
			break;
		case 'R':
			atn[1] = 50;
			atn[2] = 53;
			cout << "R";
			break;
		case 'S':
			atn[1] = 50;
			atn[2] = 54;
			cout << "S";
			break;
		case 'T':
			atn[1] = 50;
			atn[2] = 55;
			cout << "T";
			break;
		case 'U':
			atn[1] = 50;
			atn[2] = 56;
			cout << "U";
			break;
		case 'V':
			atn[1] = 50;
			atn[2] = 57;
			cout << "V";
			break;
		case 'X':
			atn[1] = 51;
			atn[2] = 48;
			cout << "X";
			break;
		case 'Y':
			atn[1] = 51;
			atn[2] = 49;
			cout << "Y";
			break;
		case 'I':
			atn[1] = 51;
			atn[2] = 52;
			cout << "I";
			break;
		case 'O':
			atn[1] = 51;
			atn[2] = 53;
			cout << "O";
			break;
	}
	srand( (int)time(NULL));
		cout << rand()%2+1;
		
		int id1 = atn[1] - 48,id2 = atn[2] - '0';
		int total = id1 + id2*9;
		
		for (int i = 0; i < 8;i++){
		cout << rand()%10;
		int a = rand()%10;
		int b = 8 - i;
		total = total + a*b;
	}
	int num9 = total % 10;
	return 0;
}