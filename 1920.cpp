#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* hTable[214748];//2147483647

int GetKey(int data) {
	if (data < 0) return (data / 10000)*(-1);
	else return (data / 10000);
}
void Insert(int data) {
	int key = GetKey(data);
	Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;
	Node* origin = hTable[key];
	if (!origin) hTable[key] = node;
	else {
		node->next = hTable[key];
		hTable[key] = node;
	}	
}
bool Search(int data) {
	int key = GetKey(data);
	if (!hTable[key]) return false;
	if (hTable[key]->data == data) return true;
	else {
		Node* temp = hTable[key];
		while (temp) {
			if (temp->data == data) return true;
			temp = temp->next;
		}
	}
	return false;
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		Insert(A);
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int check;
		scanf("%d", &check);
		printf("%d\n", Search(check));
	}
}

