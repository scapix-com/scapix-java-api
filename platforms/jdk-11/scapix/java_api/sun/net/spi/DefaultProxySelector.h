// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/ProxySelector.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_SPI_DEFAULTPROXYSELECTOR_FWD
#define SCAPIX_JAVA_API_SUN_NET_SPI_DEFAULTPROXYSELECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::spi { class DefaultProxySelector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::spi::DefaultProxySelector>
{
	static constexpr fixed_string class_name = "sun/net/spi/DefaultProxySelector";
	using base_classes = std::tuple<scapix::java_api::java::net::ProxySelector>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_SPI_DEFAULTPROXYSELECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_SPI_DEFAULTPROXYSELECTOR)
#define SCAPIX_JAVA_API_SUN_NET_SPI_DEFAULTPROXYSELECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::spi::DefaultProxySelector : public jni::object_base<"sun/net/spi/DefaultProxySelector",
	java::net::ProxySelector>
{
public:

	static jni::ref<sun::net::spi::DefaultProxySelector> new_object() { return base_::new_object(); }
	static jint socksProxyVersion() { return call_static_method<"socksProxyVersion", jint>(); }
	jni::ref<java::util::List> select(jni::ref<java::net::URI> uri) { return call_method<"select", jni::ref<java::util::List>>(uri); }
	void connectFailed(jni::ref<java::net::URI> uri, jni::ref<java::net::SocketAddress> sa, jni::ref<java::io::IOException> ioe) { return call_method<"connectFailed", void>(uri, sa, ioe); }

protected:

	DefaultProxySelector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_SPI_DEFAULTPROXYSELECTOR
