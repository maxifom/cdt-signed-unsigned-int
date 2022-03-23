# cdt-signed-unsigned-int
Error:
```
test33333/src/test33333.cpp:7:3: error:
      unknown type name 'messages_table'; did you mean 'messages_base'?
  messages_table _messages(get_self(), get_self().value);
  ^~~~~~~~~~~~~~
  messages_base
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/libcxx/locale:3498:24: note:
      'messages_base' declared here
class _LIBCPP_TYPE_VIS messages_base
                       ^
test33333/src/test33333.cpp:7:28: error: use of
      undeclared identifier 'get_self'
  messages_table _messages(get_self(), get_self().value);
                           ^
test33333/src/test33333.cpp:7:40: error: use of
      undeclared identifier 'get_self'
  messages_table _messages(get_self(), get_self().value);
                                       ^
test33333/src/test33333.cpp:10:28: error: no
      member named 'find' in 'std::__1::messages_base'
  auto msg_itr = _messages.find(from.value);
                 ~~~~~~~~~ ^
test33333/src/test33333.cpp:11:28: error: no
      member named 'end' in 'std::__1::messages_base'
  if (msg_itr == _messages.end()) {
                 ~~~~~~~~~ ^
test33333/src/test33333.cpp:13:15: error: no
      member named 'emplace' in 'std::__1::messages_base'
    _messages.emplace(from, [&](auto& msg) {
    ~~~~~~~~~ ^
test33333/src/test33333.cpp:20:15: error: no
      member named 'modify' in 'std::__1::messages_base'
    _messages.modify(msg_itr, from, [&](auto& msg) {
    ~~~~~~~~~ ^
In file included from test33333/src/test33333.cpp:1:
In file included from include/test33333.hpp:1:
In file included from /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/eosio.hpp:6:
In file included from /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/../../contracts/eosio/action.hpp:9:
In file included from /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/core/eosio/datastream.hpp:25:
In file included from /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr.hpp:12:
In file included from /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/precise.hpp:12:
In file included from /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/precise/core.hpp:21:
In file included from /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/detail/core17.hpp:10:
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/detail/core17_generated.hpp:51:9: error:
      type 'test33333::messages' decomposes into 3 elements, but only 2 names
      were provided
  auto& [a,b] = val;
        ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/detail/core17_generated.hpp:1032:30: note:
      in instantiation of function template specialization
      'boost::pfr::detail::tie_as_tuple<test33333::messages>' requested here
  return boost::pfr::detail::tie_as_tuple(val, fields_count_tag{});
                             ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/detail/core17.hpp:52:17: note:
      in instantiation of function template specialization
      'boost::pfr::detail::tie_as_tuple<test33333::messages>' requested here
        detail::tie_as_tuple(t)
                ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/precise/core.hpp:145:27: note:
      in instantiation of function template specialization
      'boost::pfr::detail::for_each_field_dispatcher<test33333::messages,
      (lambda at
      /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/boost/pfr/precise/core.hpp:147:9),
      0, 1>' requested here
    ::boost::pfr::detail::for_each_field_dispatcher(
                          ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/core/eosio/datastream.hpp:914:16: note:
      in instantiation of function template specialization
      'boost::pfr::for_each_field<test33333::messages &, (lambda at
      /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/core/eosio/datastream.hpp:914:34)>'
      requested here
   boost::pfr::for_each_field(v, [&](auto& field) {
               ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/multi_index.hpp:810:16: note:
      in instantiation of function template specialization
      'eosio::operator>><eosio::datastream<const char *>, test33333::messages,
      nullptr>' requested here
            ds >> val;
               ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/libcxx/memory:3003:32: note:
      (skipping 1 context in backtrace; use -ftemplate-backtrace-limit=0 to see
      all)
    return unique_ptr<_Tp>(new _Tp(_VSTD::forward<_Args>(__args)...));
                               ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/multi_index.hpp:808:26: note:
      in instantiation of function template specialization
      'std::__1::make_unique<eosio::multi_index<10570374048368295936,
      test33333::messages>::item, const eosio::multi_index<10570374048368295936,
      test33333::messages> *, (lambda at
      /usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/multi_index.hpp:808:51)>'
      requested here
         auto itm = std::make_unique<item>( this, [&]( auto& i ) {
                         ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/multi_index.hpp:1272:28: note:
      in instantiation of member function
      'eosio::multi_index<10570374048368295936,
      test33333::messages>::load_object_by_primary_iterator' requested here
         const auto& obj = load_object_by_primary_iterator( itr );
                           ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/multi_index.hpp:1013:17: note:
      in instantiation of member function
      'eosio::multi_index<10570374048368295936,
      test33333::messages>::lower_bound' requested here
         return lower_bound(std::numeric_limits<uint64_t>::lowest());
                ^
/usr/local/Cellar/eosio.cdt/1.8.1/opt/eosio.cdt/bin/../include/eosiolib/contracts/eosio/multi_index.hpp:1038:45: note:
      in instantiation of member function
      'eosio::multi_index<10570374048368295936, test33333::messages>::cbegin'
      requested here
      const_iterator begin()const  { return cbegin(); }
                                            ^
test33333/src/test33333.cpp:33:28: note: in
      instantiation of member function 'eosio::multi_index<10570374048368295936,
      test33333::messages>::begin' requested here
  auto msg_itr = _messages.begin();
                           ^
Warning, action <hi> does not have a ricardian contract
Warning, action <clear> does not have a ricardian contract
test33333/src/test33333.cpp:27:19: warning:
      abigen warning (Action <clear> does not have a ricardian contract)
ACTION test33333::clear() {
                  ^
Warning, action <clear> does not have a ricardian contract
1 warning and 8 errors generated.
Error while processing test33333/src/test33333.cpp.
abigen error
```
