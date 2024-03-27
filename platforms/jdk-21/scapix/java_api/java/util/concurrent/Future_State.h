// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_STATE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_STATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class Future_State; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::Future_State>
{
	static constexpr fixed_string class_name = "java/util/concurrent/Future$State";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_STATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_STATE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_STATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::Future_State : public jni::object_base<"java/util/concurrent/Future$State",
	java::lang::Enum>
{
public:

	static jni::ref<java::util::concurrent::Future_State> RUNNING() { return get_static_field<"RUNNING", jni::ref<java::util::concurrent::Future_State>>(); }
	static jni::ref<java::util::concurrent::Future_State> SUCCESS() { return get_static_field<"SUCCESS", jni::ref<java::util::concurrent::Future_State>>(); }
	static jni::ref<java::util::concurrent::Future_State> FAILED() { return get_static_field<"FAILED", jni::ref<java::util::concurrent::Future_State>>(); }
	static jni::ref<java::util::concurrent::Future_State> CANCELLED() { return get_static_field<"CANCELLED", jni::ref<java::util::concurrent::Future_State>>(); }

	static jni::ref<jni::array<java::util::concurrent::Future_State>> values() { return call_static_method<"values", jni::ref<jni::array<java::util::concurrent::Future_State>>>(); }
	static jni::ref<java::util::concurrent::Future_State> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::util::concurrent::Future_State>>(name); }

protected:

	Future_State(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_STATE
