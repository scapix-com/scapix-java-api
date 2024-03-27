// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/snmp/util/SnmpTableCache.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPLISTTABLECACHE_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPLISTTABLECACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::util { class SnmpListTableCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::util::SnmpListTableCache>
{
	static constexpr fixed_string class_name = "sun/management/snmp/util/SnmpListTableCache";
	using base_classes = std::tuple<scapix::java_api::sun::management::snmp::util::SnmpTableCache>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPLISTTABLECACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPLISTTABLECACHE)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPLISTTABLECACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::util::SnmpListTableCache : public jni::object_base<"sun/management/snmp/util/SnmpListTableCache",
	sun::management::snmp::util::SnmpTableCache>
{
public:

	static jni::ref<sun::management::snmp::util::SnmpListTableCache> new_object() { return base_::new_object(); }

protected:

	SnmpListTableCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPLISTTABLECACHE
