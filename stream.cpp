#include "stream.hpp"

using namespace std;

Stream::Stream() {
    C2S_last_seq = 0;
    C2S_modified_bytes = 0;
    S2C_last_seq = 0;
    S2C_modified_bytes = 0;
}

