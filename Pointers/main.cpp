#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h> 

using namespace std;
/*
struct Node {
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {};
};

void fun(Node* head) {
    if (head == nullptr) {
        return;
    }

    printf("%d  ", head->data); 

    if (head->next != nullptr) {
        fun(head->next->next);
    }

    printf("%d  ", head->data);	
}*/

/*bool findPair(int arr[], int n, int sum) {
    unordered_set<int> complements;

    for (int i = 0; i < n; i++) {
        if (complements.find(arr[i]) != complements.end()) {
            return true;
        }

        complements.insert(sum - arr[i]);
    }

    return false;
}*/

struct Node {
	int data;
	Node* next;
};

Node* sortedMerge(Node* a, Node* b) {
    Node dummy;
    Node* tail = &dummy;
    dummy.next = nullptr;

    while (1) {
        if (a == nullptr) {
            tail->next = b;
            break;
        }
        else if (b == nullptr) {
            tail->next = a;
            break;
        }   

        if (a->data <= b->data) {
            moveNode(&(tail->next), &a);
        } else {
            moveNode(&(tail->next), &b);
        }

        tail = tail->next;
    }
    return dummy.next;
}

void moveNode(Node** destRef, Node** sourceRef) {
    Node* newNode = *sourceRef;
    *sourceRef = newNode->next;
 	newNode->next = *destRef;
    *destRef = newNode;
}

int main(int argc, char* argv[]) {
    /*int numbers[] = {1, 2, 3, 4, 5, 6, 8, 7};

    Node* root = new Node(1);
    Node* advance = root;

    for (int i = 1; i < 8; i++) {
        Node* temp = new Node(numbers[i]);
        advance->next = temp;
        advance = temp;
    }

    Node* temp = root;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    fun(root);*/

    int numbers[] = {8, 7, 3, 1, 9, 5};
    cout << findPair(numbers, 6, 8) << endl; 

    return EXIT_SUCCESS;
}