// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/IllegalFormatException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class UnknownFormatConversionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::UnknownFormatConversionException>
{
	static constexpr fixed_string class_name = "java/util/UnknownFormatConversionException";
	using base_classes = std::tuple<scapix::java_api::java::util::IllegalFormatException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::UnknownFormatConversionException : public jni::object_base<"java/util/UnknownFormatConversionException",
	java::util::IllegalFormatException>
{
public:

	static jni::ref<java::util::UnknownFormatConversionException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	jni::ref<java::lang::String> getConversion() { return call_method<"getConversion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	UnknownFormatConversionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION
