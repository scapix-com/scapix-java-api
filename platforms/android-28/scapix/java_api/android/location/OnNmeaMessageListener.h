// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_ONNMEAMESSAGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_ONNMEAMESSAGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class OnNmeaMessageListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::OnNmeaMessageListener>
{
	static constexpr fixed_string class_name = "android/location/OnNmeaMessageListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_ONNMEAMESSAGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_ONNMEAMESSAGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_ONNMEAMESSAGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::OnNmeaMessageListener : public jni::object_base<"android/location/OnNmeaMessageListener",
	java::lang::Object>
{
public:

	void onNmeaMessage(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"onNmeaMessage", void>(p1, p2); }

protected:

	OnNmeaMessageListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_ONNMEAMESSAGELISTENER