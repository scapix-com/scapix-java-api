// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_GROUPCALL_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_GROUPCALL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class GroupCall; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::GroupCall>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/GroupCall";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_GROUPCALL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_GROUPCALL)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_GROUPCALL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::GroupCall : public jni::object_base<"android/telephony/mbms/GroupCall",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jint REASON_BY_USER_REQUEST() { return get_static_field<"REASON_BY_USER_REQUEST", jint>(); }
	static jint REASON_FREQUENCY_CONFLICT() { return get_static_field<"REASON_FREQUENCY_CONFLICT", jint>(); }
	static jint REASON_LEFT_MBMS_BROADCAST_AREA() { return get_static_field<"REASON_LEFT_MBMS_BROADCAST_AREA", jint>(); }
	static jint REASON_NONE() { return get_static_field<"REASON_NONE", jint>(); }
	static jint REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE() { return get_static_field<"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE", jint>(); }
	static jint REASON_OUT_OF_MEMORY() { return get_static_field<"REASON_OUT_OF_MEMORY", jint>(); }
	static jint STATE_STALLED() { return get_static_field<"STATE_STALLED", jint>(); }
	static jint STATE_STARTED() { return get_static_field<"STATE_STARTED", jint>(); }
	static jint STATE_STOPPED() { return get_static_field<"STATE_STOPPED", jint>(); }

	jlong getTmgi() { return call_method<"getTmgi", jlong>(); }
	void updateGroupCall(jni::ref<java::util::List> saiList, jni::ref<java::util::List> frequencyList) { return call_method<"updateGroupCall", void>(saiList, frequencyList); }
	void close() { return call_method<"close", void>(); }

protected:

	GroupCall(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_GROUPCALL
