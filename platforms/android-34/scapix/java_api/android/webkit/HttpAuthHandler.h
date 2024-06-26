// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/os/Handler.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_HTTPAUTHHANDLER_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_HTTPAUTHHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class HttpAuthHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::HttpAuthHandler>
{
	static constexpr fixed_string class_name = "android/webkit/HttpAuthHandler";
	using base_classes = std::tuple<scapix::java_api::android::os::Handler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_HTTPAUTHHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_HTTPAUTHHANDLER)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_HTTPAUTHHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::HttpAuthHandler : public jni::object_base<"android/webkit/HttpAuthHandler",
	android::os::Handler>
{
public:

	jboolean useHttpAuthUsernamePassword() { return call_method<"useHttpAuthUsernamePassword", jboolean>(); }
	void cancel() { return call_method<"cancel", void>(); }
	void proceed(jni::ref<java::lang::String> username, jni::ref<java::lang::String> password) { return call_method<"proceed", void>(username, password); }

protected:

	HttpAuthHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_HTTPAUTHHANDLER
