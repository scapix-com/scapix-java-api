// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/toolkit/url/Uri.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSURL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSURL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::dns { class DnsUrl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::dns::DnsUrl>
{
	static constexpr fixed_string class_name = "com/sun/jndi/dns/DnsUrl";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::toolkit::url::Uri>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSURL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSURL)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSURL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jndi/toolkit/url/Uri_ParseMode.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::dns::DnsUrl : public jni::object_base<"com/sun/jndi/dns/DnsUrl",
	com::sun::jndi::toolkit::url::Uri>
{
public:

	static jni::ref<com::sun::jndi::toolkit::url::Uri_ParseMode> PARSE_MODE() { return get_static_field<"PARSE_MODE", jni::ref<com::sun::jndi::toolkit::url::Uri_ParseMode>>(); }

	static jni::ref<jni::array<com::sun::jndi::dns::DnsUrl>> fromList(jni::ref<java::lang::String> p1) { return call_static_method<"fromList", jni::ref<jni::array<com::sun::jndi::dns::DnsUrl>>>(p1); }
	static jni::ref<com::sun::jndi::dns::DnsUrl> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getDomain() { return call_method<"getDomain", jni::ref<java::lang::String>>(); }

protected:

	DnsUrl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_DNS_DNSURL
