#ifndef _D_PROCESSOR_H_
#define _D_PROCESSOR_H_

#include <iostream>
#include <condition_variable>
#include <thread>
#include <vector>
#include <mutex>

#include "factory.hpp"
#include "figure.hpp"

struct processor {
    virtual void process(std::shared_ptr<std::vector<std::shared_ptr<figure>>> buffer) = 0;
};

struct stream_processor : processor {
    void process(std::shared_ptr<std::vector<std::shared_ptr<figure>>> buffer) override;
};

struct file_processor : processor {
    void process(std::shared_ptr<std::vector<std::shared_ptr<figure>>> buffer) override;
private:
    int cnt = 0;
};

#endif // _D_PROCESSOR_H_