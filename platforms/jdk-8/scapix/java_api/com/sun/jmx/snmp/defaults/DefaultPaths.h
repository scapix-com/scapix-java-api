// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_DEFAULTPATHS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_DEFAULTPATHS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::defaults { class DefaultPaths; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::defaults::DefaultPaths>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/defaults/DefaultPaths";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_DEFAULTPATHS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_DEFAULTPATHS)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_DEFAULTPATHS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::defaults::DefaultPaths : public jni::object_base<"com/sun/jmx/snmp/defaults/DefaultPaths",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> getInstallDir() { return call_static_method<"getInstallDir", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getInstallDir(jni::ref<java::lang::String> p1) { return call_static_method<"getInstallDir", jni::ref<java::lang::String>>(p1); }
	static void setInstallDir(jni::ref<java::lang::String> p1) { return call_static_method<"setInstallDir", void>(p1); }
	static jni::ref<java::lang::String> getEtcDir() { return call_static_method<"getEtcDir", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getEtcDir(jni::ref<java::lang::String> p1) { return call_static_method<"getEtcDir", jni::ref<java::lang::String>>(p1); }
	static void setEtcDir(jni::ref<java::lang::String> p1) { return call_static_method<"setEtcDir", void>(p1); }
	static jni::ref<java::lang::String> getTmpDir() { return call_static_method<"getTmpDir", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getTmpDir(jni::ref<java::lang::String> p1) { return call_static_method<"getTmpDir", jni::ref<java::lang::String>>(p1); }
	static void setTmpDir(jni::ref<java::lang::String> p1) { return call_static_method<"setTmpDir", void>(p1); }

protected:

	DefaultPaths(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_DEFAULTPATHS