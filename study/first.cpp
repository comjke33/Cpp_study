// C++ study 개념 공부
// 1
#if 0
#include <iostream>

int main(void) {
	std::cout << "Hello, World!!!" << std::endl;
	//endl은 개행문자를 포함해서 출력한다.
	return 0;
}

namespace header1 {
	int foo();
	void bar();
}

namespace header2 {
	int foo();
	void bar();
}

// 이름공간을 정의하는 방법
#endif

#if 0
#include "header1.h"

namespace header2 {
	int func() {
		foo();
	}
}
// 헤더 파일을 선언함.
// 그 안에 함수 func가 선언되어있고, 그 안에 foo가 호출됨.

namespace header1 {
	int func() {
		foo();
		header2::foo();
		// 한 이름공간에서 다른 이름공간의 함수를 호출할 때는 이렇게 적음.
	}
}

#endif

#if 1
//#include <stdio.h>
#include <iostream>

int main(void) {
	std::cout << "Hello, World!!!" << std::endl;
	//printf("hi");
	//endl은 개행문자를 포함해서 출력한다.
	return 0;
}
// namespace header1 {
// 	//int func() {1
// 		foo();
// 	//}
// }

// int func() {
// 	header1::foo();
// }
// // 계속 이렇게 어떤 이름공간의 foo인지 명시하려면 귀찮으니까..

// using header1::foo;
// // 이렇게 선언해두면 앞으로 header1::는 안 적어도 됨.
#endif
