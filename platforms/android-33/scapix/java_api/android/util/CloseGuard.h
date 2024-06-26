// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_CLOSEGUARD_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_CLOSEGUARD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class CloseGuard; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::CloseGuard>
{
	static constexpr fixed_string class_name = "android/util/CloseGuard";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_CLOSEGUARD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_CLOSEGUARD)
#define SCAPIX_JAVA_API_ANDROID_UTIL_CLOSEGUARD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::CloseGuard : public jni::object_base<"android/util/CloseGuard",
	java::lang::Object>
{
public:

	static jni::ref<android::util::CloseGuard> new_object() { return base_::new_object(); }
	void open(jni::ref<java::lang::String> closeMethodName) { return call_method<"open", void>(closeMethodName); }
	void close() { return call_method<"close", void>(); }
	void warnIfOpen() { return call_method<"warnIfOpen", void>(); }

protected:

	CloseGuard(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_CLOSEGUARD
