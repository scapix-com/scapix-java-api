// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/dns/ResolverConfiguration.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::dns { class ResolverConfigurationImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::dns::ResolverConfigurationImpl>
{
	static constexpr fixed_string class_name = "sun/net/dns/ResolverConfigurationImpl";
	using base_classes = std::tuple<scapix::java_api::sun::net::dns::ResolverConfiguration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL)
#define SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/net/dns/ResolverConfiguration_Options.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::dns::ResolverConfigurationImpl : public jni::object_base<"sun/net/dns/ResolverConfigurationImpl",
	sun::net::dns::ResolverConfiguration>
{
public:

	jni::ref<java::util::List> searchlist() { return call_method<"searchlist", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> nameservers() { return call_method<"nameservers", jni::ref<java::util::List>>(); }
	jni::ref<sun::net::dns::ResolverConfiguration_Options> options() { return call_method<"options", jni::ref<sun::net::dns::ResolverConfiguration_Options>>(); }

protected:

	ResolverConfigurationImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL