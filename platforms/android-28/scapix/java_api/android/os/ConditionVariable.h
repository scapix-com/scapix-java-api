// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_CONDITIONVARIABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_CONDITIONVARIABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class ConditionVariable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::ConditionVariable>
{
	static constexpr fixed_string class_name = "android/os/ConditionVariable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_CONDITIONVARIABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_CONDITIONVARIABLE)
#define SCAPIX_JAVA_API_ANDROID_OS_CONDITIONVARIABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::ConditionVariable : public jni::object_base<"android/os/ConditionVariable",
	java::lang::Object>
{
public:

	static jni::ref<android::os::ConditionVariable> new_object() { return base_::new_object(); }
	static jni::ref<android::os::ConditionVariable> new_object(jboolean state) { return base_::new_object(state); }
	void open() { return call_method<"open", void>(); }
	void close() { return call_method<"close", void>(); }
	void block() { return call_method<"block", void>(); }
	jboolean block(jlong timeout) { return call_method<"block", jboolean>(timeout); }

protected:

	ConditionVariable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_CONDITIONVARIABLE
