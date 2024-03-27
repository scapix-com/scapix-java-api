// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_FILEURIEXPOSEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_FILEURIEXPOSEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class FileUriExposedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::FileUriExposedException>
{
	static constexpr fixed_string class_name = "android/os/FileUriExposedException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_FILEURIEXPOSEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_FILEURIEXPOSEDEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_OS_FILEURIEXPOSEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::FileUriExposedException : public jni::object_base<"android/os/FileUriExposedException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<android::os::FileUriExposedException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	FileUriExposedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_FILEURIEXPOSEDEXCEPTION
