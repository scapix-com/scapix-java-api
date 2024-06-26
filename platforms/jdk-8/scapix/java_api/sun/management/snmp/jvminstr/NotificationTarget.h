// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_NOTIFICATIONTARGET_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_NOTIFICATIONTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvminstr { class NotificationTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvminstr::NotificationTarget>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvminstr/NotificationTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_NOTIFICATIONTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_NOTIFICATIONTARGET)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_NOTIFICATIONTARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvminstr::NotificationTarget : public jni::object_base<"sun/management/snmp/jvminstr/NotificationTarget",
	java::lang::Object>
{
public:

	jni::ref<java::net::InetAddress> getAddress() { return call_method<"getAddress", jni::ref<java::net::InetAddress>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<java::lang::String> getCommunity() { return call_method<"getCommunity", jni::ref<java::lang::String>>(); }

protected:

	NotificationTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_NOTIFICATIONTARGET
