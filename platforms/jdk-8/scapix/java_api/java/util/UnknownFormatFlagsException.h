// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/IllegalFormatException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class UnknownFormatFlagsException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::UnknownFormatFlagsException>
{
	static constexpr fixed_string class_name = "java/util/UnknownFormatFlagsException";
	using base_classes = std::tuple<scapix::java_api::java::util::IllegalFormatException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::UnknownFormatFlagsException : public jni::object_base<"java/util/UnknownFormatFlagsException",
	java::util::IllegalFormatException>
{
public:

	static jni::ref<java::util::UnknownFormatFlagsException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getFlags() { return call_method<"getFlags", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	UnknownFormatFlagsException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_UNKNOWNFORMATFLAGSEXCEPTION
