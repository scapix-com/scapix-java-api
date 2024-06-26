// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_PARSEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_PARSEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class ParseException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::ParseException>
{
	static constexpr fixed_string class_name = "java/text/ParseException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_PARSEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_PARSEEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_TEXT_PARSEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::ParseException : public jni::object_base<"java/text/ParseException",
	java::lang::Exception>
{
public:

	static jni::ref<java::text::ParseException> new_object(jni::ref<java::lang::String> detailMessage, jint location) { return base_::new_object(detailMessage, location); }
	jint getErrorOffset() { return call_method<"getErrorOffset", jint>(); }

protected:

	ParseException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_PARSEEXCEPTION
