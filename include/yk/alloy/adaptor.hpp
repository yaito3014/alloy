#ifndef YK_ALLOY_ADAPTOR_HPP
#define YK_ALLOY_ADAPTOR_HPP

namespace yk::alloy {

template<class T>
struct adaptor;

template<class T>
concept adapted = requires { typename adaptor<T>::getters; };

}  // namespace yk::alloy

#endif  // YK_ALLOY_ADAPTOR_HPP
