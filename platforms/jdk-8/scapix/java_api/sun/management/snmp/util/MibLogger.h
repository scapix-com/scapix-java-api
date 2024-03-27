// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_MIBLOGGER_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_MIBLOGGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::util { class MibLogger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::util::MibLogger>
{
	static constexpr fixed_string class_name = "sun/management/snmp/util/MibLogger";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_MIBLOGGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_MIBLOGGER)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_MIBLOGGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::util::MibLogger : public jni::object_base<"sun/management/snmp/util/MibLogger",
	java::lang::Object>
{
public:

	static jni::ref<sun::management::snmp::util::MibLogger> new_object(jni::ref<java::lang::Class> p1) { return base_::new_object(p1); }
	static jni::ref<sun::management::snmp::util::MibLogger> new_object(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::management::snmp::util::MibLogger> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<sun::management::snmp::util::MibLogger> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jboolean isTraceOn() { return call_method<"isTraceOn", jboolean>(); }
	jboolean isDebugOn() { return call_method<"isDebugOn", jboolean>(); }
	jboolean isInfoOn() { return call_method<"isInfoOn", jboolean>(); }
	jboolean isConfigOn() { return call_method<"isConfigOn", jboolean>(); }
	void config(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"config", void>(p1, p2); }
	void config(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"config", void>(p1, p2); }
	void config(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return call_method<"config", void>(p1, p2, p3); }
	void error(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"error", void>(p1, p2); }
	void info(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"info", void>(p1, p2); }
	void info(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"info", void>(p1, p2); }
	void info(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return call_method<"info", void>(p1, p2, p3); }
	void warning(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"warning", void>(p1, p2); }
	void warning(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"warning", void>(p1, p2); }
	void warning(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return call_method<"warning", void>(p1, p2, p3); }
	void trace(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"trace", void>(p1, p2); }
	void trace(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"trace", void>(p1, p2); }
	void trace(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return call_method<"trace", void>(p1, p2, p3); }
	void debug(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"debug", void>(p1, p2); }
	void debug(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"debug", void>(p1, p2); }
	void debug(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return call_method<"debug", void>(p1, p2, p3); }

protected:

	MibLogger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_MIBLOGGER