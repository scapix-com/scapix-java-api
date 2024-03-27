// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/dns/NameNode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_ZONENODE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_ZONENODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::dns { class ZoneNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::dns::ZoneNode>
{
	static constexpr fixed_string class_name = "com/sun/jndi/dns/ZoneNode";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::dns::NameNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_ZONENODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_ZONENODE)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_ZONENODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::dns::ZoneNode : public jni::object_base<"com/sun/jndi/dns/ZoneNode",
	com::sun::jndi::dns::NameNode>
{
public:


protected:

	ZoneNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_ZONENODE
