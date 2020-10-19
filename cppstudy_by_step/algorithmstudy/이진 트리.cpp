// https://www.google.com/search?q=%EC%9D%B4%EC%A7%84%ED%8A%B8%EB%A6%AC&source=lnms&tbm=isch&sa=X&ved=2ahUKEwjRmqadr5rsAhUDVpQKHU9YBAAQ_AUoAXoECBwQAw&biw=1920&bih=937#imgrc=ykw5XxieKWPD7M&imgdii=nkXfS0Tj4x_n8M
// 노드의 왼쪽은 x2, 오른쪽은 x2+1
// 전위순회: 부모 노드 먼저 출력하면서 왼쪽부터. 중위순회: 왼쪽 자식 노드 다음 부모 노드 후 자식 노드. 후위순회: 왼쪽, 오른쪽 자식 노드 먼저 출력
#include <iostream>
using namespace std;

void D(int v) {
	if (v > 7) return;
	else {
		//cout << v; // 전위
		D(v * 2);
		//cout << v; // 중위
		D(v * 2 + 1);
		//cout << v; //후위
	}
}

int tree() {
	D(1);
	return 0;
}