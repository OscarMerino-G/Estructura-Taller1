template <typename N>
class Nodo {
public:
    N info;
    
    // Nodo doble enlace
    Node<N>* next;
    Node<N>* prev; 
    
    Nodo();
    explicit Nodo(const N& info);
    Nodo(const N& data, Nodo<N>* next, Nodo<N>* prev = nullptr);
    
    
    ~Nodo();
};
