// https://www.google.com/search?q=%EC%9D%B4%EC%A7%84%ED%8A%B8%EB%A6%AC&source=lnms&tbm=isch&sa=X&ved=2ahUKEwjRmqadr5rsAhUDVpQKHU9YBAAQ_AUoAXoECBwQAw&biw=1920&bih=937#imgrc=ykw5XxieKWPD7M&imgdii=nkXfS0Tj4x_n8M
// ����� ������ x2, �������� x2+1
// ������ȸ: �θ� ��� ���� ����ϸ鼭 ���ʺ���. ������ȸ: ���� �ڽ� ��� ���� �θ� ��� �� �ڽ� ���. ������ȸ: ����, ������ �ڽ� ��� ���� ���
#include <iostream>
using namespace std;

void D(int v) {
	if (v > 7) return;
	else {
		//cout << v; // ����
		D(v * 2);
		//cout << v; // ����
		D(v * 2 + 1);
		//cout << v; //����
	}
}

int tree() {
	D(1);
	return 0;
}