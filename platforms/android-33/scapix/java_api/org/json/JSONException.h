// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ORG_JSON_JSONEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_JSON_JSONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::json { class JSONException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::json::JSONException>
{
	static constexpr fixed_string class_name = "org/json/JSONException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_JSON_JSONEXCEPTION)
#define SCAPIX_JAVA_API_ORG_JSON_JSONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::json::JSONException : public jni::object_base<"org/json/JSONException",
	java::lang::Exception>
{
public:

	static jni::ref<org::json::JSONException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	static jni::ref<org::json::JSONException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
	static jni::ref<org::json::JSONException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

protected:

	JSONException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONEXCEPTION
