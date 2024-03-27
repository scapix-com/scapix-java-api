// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_LINKPROPERTIES_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_LINKPROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class LinkProperties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::LinkProperties>
{
	static constexpr fixed_string class_name = "android/net/LinkProperties";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_LINKPROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_LINKPROPERTIES)
#define SCAPIX_JAVA_API_ANDROID_NET_LINKPROPERTIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/ProxyInfo.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::LinkProperties : public jni::object_base<"android/net/LinkProperties",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> getInterfaceName() { return call_method<"getInterfaceName", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getLinkAddresses() { return call_method<"getLinkAddresses", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getDnsServers() { return call_method<"getDnsServers", jni::ref<java::util::List>>(); }
	jboolean isPrivateDnsActive() { return call_method<"isPrivateDnsActive", jboolean>(); }
	jni::ref<java::lang::String> getPrivateDnsServerName() { return call_method<"getPrivateDnsServerName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDomains() { return call_method<"getDomains", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getRoutes() { return call_method<"getRoutes", jni::ref<java::util::List>>(); }
	jni::ref<android::net::ProxyInfo> getHttpProxy() { return call_method<"getHttpProxy", jni::ref<android::net::ProxyInfo>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	LinkProperties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_LINKPROPERTIES
