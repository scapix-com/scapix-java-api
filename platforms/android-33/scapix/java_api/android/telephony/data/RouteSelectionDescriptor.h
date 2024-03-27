// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_ROUTESELECTIONDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_ROUTESELECTIONDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::data { class RouteSelectionDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::data::RouteSelectionDescriptor>
{
	static constexpr fixed_string class_name = "android/telephony/data/RouteSelectionDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_ROUTESELECTIONDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_ROUTESELECTIONDESCRIPTOR)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_ROUTESELECTIONDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::data::RouteSelectionDescriptor : public jni::object_base<"android/telephony/data/RouteSelectionDescriptor",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint ROUTE_SSC_MODE_1() { return get_static_field<"ROUTE_SSC_MODE_1", jint>(); }
	static jint ROUTE_SSC_MODE_2() { return get_static_field<"ROUTE_SSC_MODE_2", jint>(); }
	static jint ROUTE_SSC_MODE_3() { return get_static_field<"ROUTE_SSC_MODE_3", jint>(); }
	static jint SESSION_TYPE_IPV4() { return get_static_field<"SESSION_TYPE_IPV4", jint>(); }
	static jint SESSION_TYPE_IPV4V6() { return get_static_field<"SESSION_TYPE_IPV4V6", jint>(); }
	static jint SESSION_TYPE_IPV6() { return get_static_field<"SESSION_TYPE_IPV6", jint>(); }

	jint getPrecedence() { return call_method<"getPrecedence", jint>(); }
	jint getSessionType() { return call_method<"getSessionType", jint>(); }
	jint getSscMode() { return call_method<"getSscMode", jint>(); }
	jni::ref<java::util::List> getSliceInfo() { return call_method<"getSliceInfo", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getDataNetworkName() { return call_method<"getDataNetworkName", jni::ref<java::util::List>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RouteSelectionDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_ROUTESELECTIONDESCRIPTOR