// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SE_OMAPI_SESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_SE_OMAPI_SESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::se::omapi { class Session; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::se::omapi::Session>
{
	static constexpr fixed_string class_name = "android/se/omapi/Session";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SE_OMAPI_SESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SE_OMAPI_SESSION)
#define SCAPIX_JAVA_API_ANDROID_SE_OMAPI_SESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/se/omapi/Channel.h>
#include <scapix/java_api/android/se/omapi/Reader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::se::omapi::Session : public jni::object_base<"android/se/omapi/Session",
	java::lang::Object>
{
public:

	jni::ref<android::se::omapi::Reader> getReader() { return call_method<"getReader", jni::ref<android::se::omapi::Reader>>(); }
	jni::ref<jni::array<jbyte>> getATR() { return call_method<"getATR", jni::ref<jni::array<jbyte>>>(); }
	void close() { return call_method<"close", void>(); }
	jboolean isClosed() { return call_method<"isClosed", jboolean>(); }
	void closeChannels() { return call_method<"closeChannels", void>(); }
	jni::ref<android::se::omapi::Channel> openBasicChannel(jni::ref<jni::array<jbyte>> aid, jbyte p2) { return call_method<"openBasicChannel", jni::ref<android::se::omapi::Channel>>(aid, p2); }
	jni::ref<android::se::omapi::Channel> openBasicChannel(jni::ref<jni::array<jbyte>> aid) { return call_method<"openBasicChannel", jni::ref<android::se::omapi::Channel>>(aid); }
	jni::ref<android::se::omapi::Channel> openLogicalChannel(jni::ref<jni::array<jbyte>> aid, jbyte p2) { return call_method<"openLogicalChannel", jni::ref<android::se::omapi::Channel>>(aid, p2); }
	jni::ref<android::se::omapi::Channel> openLogicalChannel(jni::ref<jni::array<jbyte>> aid) { return call_method<"openLogicalChannel", jni::ref<android::se::omapi::Channel>>(aid); }

protected:

	Session(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SE_OMAPI_SESSION
