#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* hTable[42950];//42949 67259

int GetKey(int data) {
	if (data < 0) return (data / 10000);
	else return (data / 10000) * 2;
}
void Insert(int data) {
	Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;
	Node* origin = hTable[GetKey(data)];
	if (!origin) hTable[GetKey(data)] = node;
	else {
		node->next = hTable[GetKey(data)];
		hTable[GetKey(data)] = node;
	}	
}
bool Search(int data) {
	if (!hTable[GetKey(data)]) return false;
	if (hTable[GetKey(data)]->data == data) return true;
	else {
		Node* temp = hTable[GetKey(data)];
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
		cin >> check;
		cout << Search(check) << endl;
	}
}