
template<typename X> class stack{
    private:
        int m_size;
        X* m_arr = nullptr; 
        int m_capacity;
        int m_index = -1;
    public:
        stack();
        ~stack();
        bool empty();
        void push(const X& elem);
        void pop();
        X& top();
        int size();
};

template<typename X>
stack<X>::stack():
           m_capacity(0),
           m_size(0)
           {}  

template<typename X> 
stack<X>::~stack(){
   delete[] m_arr;
}



template<typename X>
int stack<X>::size(){
    return m_size;
}

template<typename X> 
X& stack<X>::top(){
    return (m_index == 0)?m_arr[m_size]:m_arr[m_index];
}


template<typename X> 
void stack<X>::pop(){
    if(m_size != 0){
        m_arr[m_size] = 0;
        m_arr[--m_size];
        m_index--;
    }
}


template<typename X> 
bool stack<X>::empty(){
        return (m_size == 0)? false : true;
}




template<typename X>
void stack<X>::push(const X& elem){
if(m_size == m_capacity){
        X* temp = new X[(m_capacity + 1)* 2];
        for (int i = 0; i < m_size; i++)
        {
            temp[i] = m_arr[i];
        }
        delete[] m_arr;
        m_arr = temp;
    }
    m_arr[m_size++] = elem;           
    ++m_index;
}
        
