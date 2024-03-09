class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class MyLinkedList {
    Node* head;
public:
    MyLinkedList() {
        head = nullptr; // Corrected initialization
    }
    
    int get(int index) {
        int cnt = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (cnt == index) {
                return temp->data;
            }
            cnt++;
            temp = temp->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        if (head == nullptr) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        temp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        int cnt = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (cnt == index - 1) {
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            cnt++;
            temp = temp->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        int cnt = 0;
        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr) {
            if (cnt == index) {
                prev->next = temp->next;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
            cnt++;
        }
    }

    ~MyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */