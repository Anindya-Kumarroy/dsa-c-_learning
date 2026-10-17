#include <stdio.h>
#include <stdlib.h>

// ১. লিঙ্কড লিস্টের নোড স্ট্রাকচার তৈরি
struct Node {
    int data;
    struct Node* next;
};

// নোড প্রিন্ট করার ফাংশন (Traversal)
void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next; // পরবর্তী নোডে যাওয়া
    }
    printf("NULL\n");
}

int main() {
    // ২. পয়েন্টার ডিক্লেয়ার করা
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // ৩. মেমোরিতে ডায়নামিকভাবে ৩টি নোড বরাদ্দ করা (Dynamic Memory Allocation)
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // ৪. প্রথম নোডে ডাটা রাখা এবং দ্বিতীয় নোডের সাথে লিঙ্ক করা
    head->data = 10;
    head->next = second;

    // ৫. দ্বিতীয় নোডে ডাটা রাখা এবং তৃতীয় নোডের সাথে লিঙ্ক করা
    second->data = 20;
    second->next = third;

    // ৬. তৃতীয় নোডে ডাটা রাখা এবং নেক্সট পয়েন্টার NULL করা (লিস্ট শেষ)
    third->data = 30;
    third->next = NULL;

    // ৭. লিঙ্কড লিস্টের ডাটা প্রদর্শন করা
    printf("Linked List-elements are:");
    printList(head);

    return 0;
}