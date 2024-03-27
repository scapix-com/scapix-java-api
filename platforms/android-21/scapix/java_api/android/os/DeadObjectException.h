// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/os/RemoteException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_DEADOBJECTEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_DEADOBJECTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class DeadObjectException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::DeadObjectException>
{
	static constexpr fixed_string class_name = "android/os/DeadObjectException";
	using base_classes = std::tuple<scapix::java_api::android::os::RemoteException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DEADOBJECTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_DEADOBJECTEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_OS_DEADOBJECTEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::DeadObjectException : public jni::object_base<"android/os/DeadObjectException",
	android::os::RemoteException>
{
public:

	static jni::ref<android::os::DeadObjectException> new_object() { return base_::new_object(); }

protected:

	DeadObjectException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DEADOBJECTEXCEPTION
