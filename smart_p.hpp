#ifndef smart_p_hpp
#define smart_p_hpp

#include <stdio.h>

template <typename T>
class smart_p{
    T* ptr;
public:
    smart_p(T *ptr);
    ~smart_p();
    
    T& operator *();
};

template <typename T>
smart_p<T>::smart_p(T *ptr){
    this->ptr = ptr;
}
template <typename T>
smart_p<T>::~smart_p(){
    delete ptr;
}
template <typename T>
T& smart_p<T>::operator *(){
    return *ptr;
}

#endif /* smart_p_hpp */
