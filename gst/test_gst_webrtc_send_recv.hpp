#pragma once

#include "test_impl.hpp"

class TestGstWebrtcSendRecv: public TestImpl
{
public:
    TestGstWebrtcSendRecv(int peer_id);

    ~TestGstWebrtcSendRecv();
protected:
    virtual void run() override;
    int peer_id_;

};


