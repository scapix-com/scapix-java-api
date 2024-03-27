// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/IllegalFormatException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class IllegalFormatPrecisionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::IllegalFormatPrecisionException>
{
	static constexpr fixed_string class_name = "java/util/IllegalFormatPrecisionException";
	using base_classes = std::tuple<scapix::java_api::java::util::IllegalFormatException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::IllegalFormatPrecisionException : public jni::object_base<"java/util/IllegalFormatPrecisionException",
	java::util::IllegalFormatException>
{
public:

	static jni::ref<java::util::IllegalFormatPrecisionException> new_object(jint p) { return base_::new_object(p); }
	jint getPrecision() { return call_method<"getPrecision", jint>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	IllegalFormatPrecisionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION
