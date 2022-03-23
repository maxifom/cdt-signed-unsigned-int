#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;

CONTRACT test33333 : public contract {
  public:
    using contract::contract;

    ACTION hi(name from, eosio::signed_int i32, eosio::unsigned_int ui32);
    ACTION clear();

  private:
    TABLE messages {
      name    user;
      eosio::signed_int  i32;
      eosio::unsigned_int ui32;
      auto primary_key() const { return user.value; }
    };
    typedef multi_index<name("messages"), messages> messages_table;
};
