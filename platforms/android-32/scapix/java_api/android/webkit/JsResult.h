// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_JSRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_JSRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class JsResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::JsResult>
{
	static constexpr fixed_string class_name = "android/webkit/JsResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_JSRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_JSRESULT)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_JSRESULT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::JsResult : public jni::object_base<"android/webkit/JsResult",
	java::lang::Object>
{
public:

	void cancel() { return call_method<"cancel", void>(); }
	void confirm() { return call_method<"confirm", void>(); }

protected:

	JsResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_JSRESULT
