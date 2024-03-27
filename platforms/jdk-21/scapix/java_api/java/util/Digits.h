// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_DIGITS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_DIGITS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Digits; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Digits>
{
	static constexpr fixed_string class_name = "java/util/Digits";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DIGITS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_DIGITS)
#define SCAPIX_JAVA_API_JAVA_UTIL_DIGITS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Digits : public jni::object_base<"java/util/Digits",
	java::lang::Object>
{
public:

	jint digits(jlong p1, jni::ref<jni::array<jbyte>> p2, jint p3, jni::ref<java::lang::invoke::MethodHandle> p4) { return call_method<"digits", jint>(p1, p2, p3, p4); }
	jint size(jlong p1) { return call_method<"size", jint>(p1); }

protected:

	Digits(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DIGITS
