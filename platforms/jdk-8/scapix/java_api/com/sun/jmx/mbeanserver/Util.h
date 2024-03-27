// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_UTIL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_UTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class Util; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::Util>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/Util";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_UTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_UTIL)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_UTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::mbeanserver::Util : public jni::object_base<"com/sun/jmx/mbeanserver/Util",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::jmx::mbeanserver::Util> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::ObjectName> newObjectName(jni::ref<java::lang::String> p1) { return call_static_method<"newObjectName", jni::ref<javax::management::ObjectName>>(p1); }
	static jni::ref<java::lang::Object> cast(jni::ref<java::lang::Object> p1) { return call_static_method<"cast", jni::ref<java::lang::Object>>(p1); }
	static jint hashCode(jni::ref<jni::array<java::lang::String>> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_static_method<"hashCode", jint>(p1, p2); }
	static jboolean wildmatch(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"wildmatch", jboolean>(p1, p2); }

protected:

	Util(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_UTIL
