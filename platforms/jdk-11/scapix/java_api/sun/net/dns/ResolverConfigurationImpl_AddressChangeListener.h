// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_ADDRESSCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_ADDRESSCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::dns { class ResolverConfigurationImpl_AddressChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::dns::ResolverConfigurationImpl_AddressChangeListener>
{
	static constexpr fixed_string class_name = "sun/net/dns/ResolverConfigurationImpl$AddressChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_ADDRESSCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_ADDRESSCHANGELISTENER)
#define SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_ADDRESSCHANGELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::dns::ResolverConfigurationImpl_AddressChangeListener : public jni::object_base<"sun/net/dns/ResolverConfigurationImpl$AddressChangeListener",
	java::lang::Thread>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	ResolverConfigurationImpl_AddressChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_DNS_RESOLVERCONFIGURATIONIMPL_ADDRESSCHANGELISTENER
