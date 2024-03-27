// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPTABLECACHE_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPTABLECACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::util { class SnmpTableCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::util::SnmpTableCache>
{
	static constexpr fixed_string class_name = "sun/management/snmp/util/SnmpTableCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPTABLECACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPTABLECACHE)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPTABLECACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/management/snmp/util/SnmpTableHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::util::SnmpTableCache : public jni::object_base<"sun/management/snmp/util/SnmpTableCache",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<sun::management::snmp::util::SnmpTableCache> new_object() { return base_::new_object(); }
	jni::ref<sun::management::snmp::util::SnmpTableHandler> getTableHandler() { return call_method<"getTableHandler", jni::ref<sun::management::snmp::util::SnmpTableHandler>>(); }

protected:

	SnmpTableCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPTABLECACHE