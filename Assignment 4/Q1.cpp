#include<iostream>
using namespace std;
class hero {
public:
void man() {
cout << "superman" << "\n";
}
};
class marvel : public hero {
public:
void xd() {
cout << " Here comes the hero to save the world !!" << "\n";
}
};
int main() {
marvel Joey;
Joey.xd();
Joey.man();
}
