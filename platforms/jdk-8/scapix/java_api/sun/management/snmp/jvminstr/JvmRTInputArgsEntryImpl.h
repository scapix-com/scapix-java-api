// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/snmp/jvmmib/JvmRTInputArgsEntryMBean.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMRTINPUTARGSENTRYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMRTINPUTARGSENTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvminstr { class JvmRTInputArgsEntryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvminstr::JvmRTInputArgsEntryImpl>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvminstr/JvmRTInputArgsEntryImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::snmp::jvmmib::JvmRTInputArgsEntryMBean, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMRTINPUTARGSENTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMRTINPUTARGSENTRYIMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMRTINPUTARGSENTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvminstr::JvmRTInputArgsEntryImpl : public jni::object_base<"sun/management/snmp/jvminstr/JvmRTInputArgsEntryImpl",
	java::lang::Object,
	sun::management::snmp::jvmmib::JvmRTInputArgsEntryMBean,
	java::io::Serializable>
{
public:

	static jni::ref<sun::management::snmp::jvminstr::JvmRTInputArgsEntryImpl> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getJvmRTInputArgsItem() { return call_method<"getJvmRTInputArgsItem", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Integer> getJvmRTInputArgsIndex() { return call_method<"getJvmRTInputArgsIndex", jni::ref<java::lang::Integer>>(); }

protected:

	JvmRTInputArgsEntryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMRTINPUTARGSENTRYIMPL
