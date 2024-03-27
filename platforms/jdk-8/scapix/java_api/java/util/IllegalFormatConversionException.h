// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/IllegalFormatException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class IllegalFormatConversionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::IllegalFormatConversionException>
{
	static constexpr fixed_string class_name = "java/util/IllegalFormatConversionException";
	using base_classes = std::tuple<scapix::java_api::java::util::IllegalFormatException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::IllegalFormatConversionException : public jni::object_base<"java/util/IllegalFormatConversionException",
	java::util::IllegalFormatException>
{
public:

	static jni::ref<java::util::IllegalFormatConversionException> new_object(jchar p1, jni::ref<java::lang::Class> p2) { return base_::new_object(p1, p2); }
	jchar getConversion() { return call_method<"getConversion", jchar>(); }
	jni::ref<java::lang::Class> getArgumentClass() { return call_method<"getArgumentClass", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	IllegalFormatConversionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ILLEGALFORMATCONVERSIONEXCEPTION
