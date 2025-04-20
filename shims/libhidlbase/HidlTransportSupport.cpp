#include <android-base/logging.h>
#include <hidl/HidlBinderSupport.h>

#define MAX_THREADS 8

namespace android {
namespace hardware {

void configureRpcTh_pathced(size_t maxThreads, bool callerWillJoin) {
    LOG(INFO) << "Hijacking configureRpcThreadpool; Requested maxThreads: " << maxThreads << ", Real maxThreads: " << MAX_THREADS;
    android::hardware::configureBinderRpcThreadpool(MAX_THREADS, callerWillJoin);
}

}
}