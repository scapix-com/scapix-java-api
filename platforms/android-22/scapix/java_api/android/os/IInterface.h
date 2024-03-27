// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_IINTERFACE_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_IINTERFACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class IInterface; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::IInterface>
{
	static constexpr fixed_string class_name = "android/os/IInterface";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_IINTERFACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_IINTERFACE)
#define SCAPIX_JAVA_API_ANDROID_OS_IINTERFACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/IBinder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::IInterface : public jni::object_base<"android/os/IInterface",
	java::lang::Object>
{
public:

	jni::ref<android::os::IBinder> asBinder() { return call_method<"asBinder", jni::ref<android::os::IBinder>>(); }

protected:

	IInterface(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_IINTERFACE