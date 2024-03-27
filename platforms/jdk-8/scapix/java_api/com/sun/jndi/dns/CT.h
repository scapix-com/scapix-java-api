// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_CT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_CT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::dns { class CT; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::dns::CT>
{
	static constexpr fixed_string class_name = "com/sun/jndi/dns/CT";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_CT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_CT)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_CT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::dns::CT : public jni::object_base<"com/sun/jndi/dns/CT",
	java::lang::Object>
{
public:


protected:

	CT(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_CT