#include <iostream>//C++ 표준 입출력의 클래스와 객체 선언->키보드 입력, 화면 출력에 필요
using namespace std;//이걸 위에 써놓으면 일일이 입출력을 코딩할 때 std::를 안써도 됨

int main()//main()함수는 C++을 시작하는 함수, main함수 종료 시 프로그램 종료
{
	char name[12];//대괄호[] 안에 있는 배열의 크기는 1보단 커야되고 입력되는 문자 배열의 크기를 입력하면 된다. 입력값의 크기보다  큰 수를 입력해도 남은 수는 '\0'로 초기화 된다.
	int stNo;//학번은 정수로 입력한다.
	float cp;//c프로그래밍 학점
	float cj;//컴퓨터및정보보호개론 학점
	float se;//소프트웨어 개발 영어 학점
	float uae;//대학고급영어 학점

	/*학점은 실수로 표시되므로 float를 사용해 나타낸다.*/
	float avscore; //각 과목의 학점이 실수이므로 평균 학점도 실수값으로 나온다.

	cout << "이름: ";//이 상태에서 공백이 포함된 문자열을 입력하면 연산자는 빈칸을 만났을 때 입력을 종료한 것으로 인식한다.
	cin.getline(name, 12, '\n'); //이름을 '이 시온'으로 입력할 것이기 때문에 공백을 포함한 문자열을 내놓을 수 있어야 한다. 
	cout << "학번: ";
	cin >> stNo;
	cout << "반갑습니다." << name << "님" << endl << endl;//엔터를 두번 친 화면이 나와야 하므로 endl을 두번 출력한다.
	cout << "학점 입력을 시작합니다."<<endl<<endl;
	cout <<"================ SWING 31================"  << endl;
	cout << "C프로그래밍(3학점): ";
	cin >> cp;
	cout << "컴퓨터및정보보호개론(3학점): ";
	cin >> cj;
	cout << "소프트웨어개발실무영어I(1학점): ";
	cin >> se;
	cout << "대학고급영어(2학점): ";
	cin >> uae;
	cout<< "=========================================" << endl<<endl;
	avscore = (cp + cj + se + uae) / 4;//4과목의 평균 성적을 구하는 식
	cout << name<<"(2023)님의 전체 학점은 " << avscore << "입니다.";

	return 0;//C언어는 코딩을 끝낼 때 return 0; 작성이 필수지만 C++은 쓰지 않아도 실행이 된다.


}