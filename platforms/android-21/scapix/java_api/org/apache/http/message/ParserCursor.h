// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::message { class ParserCursor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::message::ParserCursor>
{
	static constexpr fixed_string class_name = "org/apache/http/message/ParserCursor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::message::ParserCursor : public jni::object_base<"org/apache/http/message/ParserCursor",
	java::lang::Object>
{
public:

	static jni::ref<org::apache::http::message::ParserCursor> new_object(jint lowerBound, jint upperBound) { return base_::new_object(lowerBound, upperBound); }
	jint getLowerBound() { return call_method<"getLowerBound", jint>(); }
	jint getUpperBound() { return call_method<"getUpperBound", jint>(); }
	jint getPos() { return call_method<"getPos", jint>(); }
	void updatePos(jint pos) { return call_method<"updatePos", void>(pos); }
	jboolean atEnd() { return call_method<"atEnd", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ParserCursor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_PARSERCURSOR
