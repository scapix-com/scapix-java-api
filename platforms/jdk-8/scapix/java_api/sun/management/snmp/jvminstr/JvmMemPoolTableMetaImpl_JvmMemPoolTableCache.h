// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/snmp/util/SnmpNamedListTableCache.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMPOOLTABLEMETAIMPL_JVMMEMPOOLTABLECACHE_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMPOOLTABLEMETAIMPL_JVMMEMPOOLTABLECACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvminstr { class JvmMemPoolTableMetaImpl_JvmMemPoolTableCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvminstr::JvmMemPoolTableMetaImpl_JvmMemPoolTableCache>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvminstr/JvmMemPoolTableMetaImpl$JvmMemPoolTableCache";
	using base_classes = std::tuple<scapix::java_api::sun::management::snmp::util::SnmpNamedListTableCache>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMPOOLTABLEMETAIMPL_JVMMEMPOOLTABLECACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMPOOLTABLEMETAIMPL_JVMMEMPOOLTABLECACHE)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMPOOLTABLEMETAIMPL_JVMMEMPOOLTABLECACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/management/snmp/util/SnmpTableHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::snmp::jvminstr::JvmMemPoolTableMetaImpl_JvmMemPoolTableCache : public jni::object_base<"sun/management/snmp/jvminstr/JvmMemPoolTableMetaImpl$JvmMemPoolTableCache",
	sun::management::snmp::util::SnmpNamedListTableCache>
{
public:

	jni::ref<sun::management::snmp::util::SnmpTableHandler> getTableHandler() { return call_method<"getTableHandler", jni::ref<sun::management::snmp::util::SnmpTableHandler>>(); }

protected:

	JvmMemPoolTableMetaImpl_JvmMemPoolTableCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMPOOLTABLEMETAIMPL_JVMMEMPOOLTABLECACHE