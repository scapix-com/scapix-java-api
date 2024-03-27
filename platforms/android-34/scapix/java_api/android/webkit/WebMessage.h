// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBMESSAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebMessage>
{
	static constexpr fixed_string class_name = "android/webkit/WebMessage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBMESSAGE)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/webkit/WebMessagePort.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebMessage : public jni::object_base<"android/webkit/WebMessage",
	java::lang::Object>
{
public:

	static jni::ref<android::webkit::WebMessage> new_object(jni::ref<java::lang::String> data) { return base_::new_object(data); }
	static jni::ref<android::webkit::WebMessage> new_object(jni::ref<java::lang::String> data, jni::ref<jni::array<android::webkit::WebMessagePort>> ports) { return base_::new_object(data, ports); }
	jni::ref<java::lang::String> getData() { return call_method<"getData", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<android::webkit::WebMessagePort>> getPorts() { return call_method<"getPorts", jni::ref<jni::array<android::webkit::WebMessagePort>>>(); }

protected:

	WebMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBMESSAGE