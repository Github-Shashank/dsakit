template <typename T>
dsa::LinkedList<T>::LinkedList()
  : head_(nullptr),
    tail_(nullptr),
    size_(0) {}


template <typename T>
dsa::LinkedList<T>::~LinkedList()
{
    Node* current = head_;

    while (current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
}


template <typename T>
std::size_t dsa::LinkedList<T>::size() const
{
    return size_;
}


template <typename T>
bool dsa::LinkedList<T>::empty() const
{
    return size_ == 0;
}


template <typename T>
void dsa::LinkedList<T>::push_front(const T& value)
{
    Node* new_node = new Node(value, head_);

    head_ = new_node;

    if (tail_ == nullptr) {
        tail_ = new_node;
    }

    ++size_;
}


template <typename T>
void dsa::LinkedList<T>::push_back(const T& value)
{
    Node* new_node = new Node(value, nullptr);

    if (head_ == nullptr)
    {
        head_ = new_node;
        tail_ = new_node;
    }
    else
    {
        tail_->next = new_node;
        tail_ = new_node;
    }

    ++size_;
}


template <typename T>
void dsa::LinkedList<T>::clear()
{
    Node* current = head_;

    while (current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }

    head_ = nullptr;
    tail_ = nullptr;
    size_ = 0;
}


template <typename T>
void dsa::LinkedList<T>::iterate(std::ostream& out) const
{
    Node* temp = head_;

    while (temp != nullptr)
    {
        out << temp->data << "->";
        temp = temp->next;
    }
    out << "null";
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const dsa::LinkedList<T>& self)
{
    self.iterate(out);
    return out;
}