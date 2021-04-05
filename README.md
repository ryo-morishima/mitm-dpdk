# mitm-dpdk
Simple man-in-the-middle attack with DPDK

# Demo
![demo](https://github.com/rmkm/mitm-dpdk/wiki/images/demo.png)
![demo](https://github.com/rmkm/mitm-dpdk/wiki/images/demo.gif)

# Features
- Match & Replace the packet payload based on regular expression
- Keep TCP consistency by recalculating TCP Sequence and Acknowledgment numbers
- L2 transparent
- Accept multiple streams by storing state of each 5-tuple
- Currently only works under IPv4, TCP, and no SSL

# Development environment
- Ubuntu 18.04.4 LTS
- Linux version 4.15.0-132-generic
- g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
- DPDK 19.11.6 (LTS)
- libboost-dev 1.65.1.0ubuntu1

Modified l2fwd sample application (https://doc.dpdk.org/guides-19.11/sample_app_ug/l2_forward_real_virtual.html)

# Install
```
git clone https://github.com/rmkm/mitm-dpdk.git
cd mitm-dpdk
make
./build/l2fwd -l 0-3 -n 4 -- -q 8 -p 0x3 (example)
```
