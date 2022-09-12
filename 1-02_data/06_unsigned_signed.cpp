#include <iostream>
#include <numeric>
#include <limits>

using namespace std;
int main()
{
    //unsigned(부호 없음)
    cout<< (int)numeric_limits<uint8_t>::max() <<endl;
    cout<< numeric_limits<uint16_t>::max() <<endl;
    cout<< numeric_limits<uint32_t>::max() <<endl;
    cout<< numeric_limits<uint64_t>::max() <<endl;
      
    //signed(부호 있음)
    //양수
    cout<< (int)numeric_limits<int8_t>::max() <<endl;
    cout<< numeric_limits<int16_t>::max() <<endl;
    cout<< numeric_limits<int32_t>::max() <<endl;
    cout<< numeric_limits<int64_t>::max() <<endl;
    //음수
    cout<< (int)numeric_limits<int8_t>::min() <<endl;
    cout<< numeric_limits<int16_t>::min() <<endl;
    cout<< numeric_limits<int32_t>::min() <<endl;
    cout<< numeric_limits<int64_t>::min() <<endl;

    
}