// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/snmp/util/SnmpListTableCache.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPNAMEDLISTTABLECACHE_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPNAMEDLISTTABLECACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::util { class SnmpNamedListTableCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::util::SnmpNamedListTableCache>
{
	static constexpr fixed_string class_name = "sun/management/snmp/util/SnmpNamedListTableCache";
	using base_classes = std::tuple<scapix::java_api::sun::management::snmp::util::SnmpListTableCache>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPNAMEDLISTTABLECACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPNAMEDLISTTABLECACHE)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPNAMEDLISTTABLECACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::util::SnmpNamedListTableCache : public jni::object_base<"sun/management/snmp/util/SnmpNamedListTableCache",
	sun::management::snmp::util::SnmpListTableCache>
{
public:

	static jni::ref<sun::management::snmp::util::SnmpNamedListTableCache> new_object() { return base_::new_object(); }

protected:

	SnmpNamedListTableCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_UTIL_SNMPNAMEDLISTTABLECACHE
