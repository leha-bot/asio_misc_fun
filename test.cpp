#include <gtest/gtest.h>

class Some {
public:
	void f() {
	}

};

template <typename T>
void f(const T)
{
}

TEST(Meow, HowMeow) {
	ASSERT_EQ(1, 1);	
}


/*int main() {
	Some s;
	f(&s.f);
}*/

