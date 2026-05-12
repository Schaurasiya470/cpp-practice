// Implementation of singly Linked List
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};

class List
{
    private:
        Node *head;

    public:
        List()
        {
            this->head = nullptr;
        }

        // Insert a node at first
        void insertAtFront(int val)
        {
            Node *node = new Node(val);
            node->next = head;
            head = node;
        }

        // Insert a node at last
        void insertAtEnd(int val){
            Node *node = new Node(val);
            if(head == nullptr){
                head = node;
                return;
            }
            Node *temp = head;
            while (temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = node;
        }

        // Insert a node at a index [0-(n-1)]
        void insertAtPos(int val, int pos){
            if (pos == 0){
                insertAtFront(val);
                return;
            }
            Node *node = new Node(val);
            Node *temp = head;
            for (int i = 0; i < (pos - 1) && temp != nullptr; i++){
                temp = temp->next;
            }
            if(temp == nullptr){
                cout << "Position not found..." << endl;
            }
            node->next = temp->next;
            temp->next = node;
        }

        // Deleting a node by given value
        void deleteNodeByValue(int val){
            if(head == nullptr){
                return;
            }
            Node *temp = head;
            if(temp->data == val){
                head = head->next;
                delete temp;
                return;
            }
            while (temp->next != nullptr && temp->next->data != val){
                temp = temp->next;
            }
            if(temp->next == nullptr){
                cout << "Node not found..." << endl;
                return;
            }
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }

        // Search a node in list
        bool search(int val) {
            Node* temp = head;
            while (temp != nullptr) {
                if (temp->data == val) return true;
                temp = temp->next;
            }
            return false;
        }

        // Reverse a list
        void reverse(){
            Node *temp = head;
            Node *prev = nullptr;
            while(temp != nullptr){
                temp = temp->next;
                head->next = prev;
                prev = head;
                head = temp;
            }
            head = prev;
        }

        // Destructor (Free Memory)
        ~List(){
            Node *temp = head;
            while(head != nullptr){
                head = head->next;
                delete temp;
                temp = head;
            }
            cout << "All Memory free.." << endl;
        }

        // Displaying all nodes of list
        void displayNodes()
        {
            if (head == nullptr)
            {
                cout << "No any element in list..." << endl;
                return;
            }
            Node *temp = head;
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main()
{
    List li;
    li.insertAtFront(100);
    li.insertAtEnd(200);
    li.insertAtEnd(201);
    li.insertAtPos(101,2);
    li.deleteNodeByValue(1000);
    cout << (li.search(1040) ? "node found..." : "node not found...") << endl;
    li.reverse();
    li.displayNodes();

    return 0;
}