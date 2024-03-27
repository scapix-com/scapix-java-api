// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_DEBUG_INSTRUCTIONCOUNT_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_DEBUG_INSTRUCTIONCOUNT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Debug_InstructionCount; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Debug_InstructionCount>
{
	static constexpr fixed_string class_name = "android/os/Debug$InstructionCount";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DEBUG_INSTRUCTIONCOUNT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_DEBUG_INSTRUCTIONCOUNT)
#define SCAPIX_JAVA_API_ANDROID_OS_DEBUG_INSTRUCTIONCOUNT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Debug_InstructionCount : public jni::object_base<"android/os/Debug$InstructionCount",
	java::lang::Object>
{
public:

	static jni::ref<android::os::Debug_InstructionCount> new_object() { return base_::new_object(); }
	jboolean resetAndStart() { return call_method<"resetAndStart", jboolean>(); }
	jboolean collect() { return call_method<"collect", jboolean>(); }
	jint globalTotal() { return call_method<"globalTotal", jint>(); }
	jint globalMethodInvocations() { return call_method<"globalMethodInvocations", jint>(); }

protected:

	Debug_InstructionCount(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DEBUG_INSTRUCTIONCOUNT