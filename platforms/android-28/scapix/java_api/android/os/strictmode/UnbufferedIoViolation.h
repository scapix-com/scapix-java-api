// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/os/strictmode/Violation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_UNBUFFEREDIOVIOLATION_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_UNBUFFEREDIOVIOLATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os::strictmode { class UnbufferedIoViolation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::strictmode::UnbufferedIoViolation>
{
	static constexpr fixed_string class_name = "android/os/strictmode/UnbufferedIoViolation";
	using base_classes = std::tuple<scapix::java_api::android::os::strictmode::Violation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_UNBUFFEREDIOVIOLATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_UNBUFFEREDIOVIOLATION)
#define SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_UNBUFFEREDIOVIOLATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::strictmode::UnbufferedIoViolation : public jni::object_base<"android/os/strictmode/UnbufferedIoViolation",
	android::os::strictmode::Violation>
{
public:


protected:

	UnbufferedIoViolation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STRICTMODE_UNBUFFEREDIOVIOLATION
