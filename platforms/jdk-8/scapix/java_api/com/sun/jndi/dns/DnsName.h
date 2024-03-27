// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/Name.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSNAME_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::dns { class DnsName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::dns::DnsName>
{
	static constexpr fixed_string class_name = "com/sun/jndi/dns/DnsName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::Name>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSNAME)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::dns::DnsName : public jni::object_base<"com/sun/jndi/dns/DnsName",
	java::lang::Object,
	javax::naming::Name>
{
public:

	static jni::ref<com::sun::jndi::dns::DnsName> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::jndi::dns::DnsName> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isHostName() { return call_method<"isHostName", jboolean>(); }
	jshort getOctets() { return call_method<"getOctets", jshort>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint compareTo(jni::ref<java::lang::Object> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean startsWith(jni::ref<javax::naming::Name> p1) { return call_method<"startsWith", jboolean>(p1); }
	jboolean endsWith(jni::ref<javax::naming::Name> p1) { return call_method<"endsWith", jboolean>(p1); }
	jni::ref<java::lang::String> get(jint p1) { return call_method<"get", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Enumeration> getAll() { return call_method<"getAll", jni::ref<java::util::Enumeration>>(); }
	jni::ref<javax::naming::Name> getPrefix(jint p1) { return call_method<"getPrefix", jni::ref<javax::naming::Name>>(p1); }
	jni::ref<javax::naming::Name> getSuffix(jint p1) { return call_method<"getSuffix", jni::ref<javax::naming::Name>>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> remove(jint p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jni::ref<javax::naming::Name> add(jni::ref<java::lang::String> p1) { return call_method<"add", jni::ref<javax::naming::Name>>(p1); }
	jni::ref<javax::naming::Name> add(jint p1, jni::ref<java::lang::String> p2) { return call_method<"add", jni::ref<javax::naming::Name>>(p1, p2); }
	jni::ref<javax::naming::Name> addAll(jni::ref<javax::naming::Name> p1) { return call_method<"addAll", jni::ref<javax::naming::Name>>(p1); }
	jni::ref<javax::naming::Name> addAll(jint p1, jni::ref<javax::naming::Name> p2) { return call_method<"addAll", jni::ref<javax::naming::Name>>(p1, p2); }

protected:

	DnsName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSNAME