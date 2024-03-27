// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/ClientConnectionManager.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::conn::tsccm { class ThreadSafeClientConnManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::conn::ClientConnectionManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/org/apache/http/conn/ClientConnectionRequest.h>
#include <scapix/java_api/org/apache/http/conn/ManagedClientConnection.h>
#include <scapix/java_api/org/apache/http/conn/routing/HttpRoute.h>
#include <scapix/java_api/org/apache/http/conn/scheme/SchemeRegistry.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager : public jni::object_base<"org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager",
	java::lang::Object,
	org::apache::http::conn::ClientConnectionManager>
{
public:

	static jni::ref<org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager> new_object(jni::ref<org::apache::http::params::HttpParams> params, jni::ref<org::apache::http::conn::scheme::SchemeRegistry> schreg) { return base_::new_object(params, schreg); }
	jni::ref<org::apache::http::conn::scheme::SchemeRegistry> getSchemeRegistry() { return call_method<"getSchemeRegistry", jni::ref<org::apache::http::conn::scheme::SchemeRegistry>>(); }
	jni::ref<org::apache::http::conn::ClientConnectionRequest> requestConnection(jni::ref<org::apache::http::conn::routing::HttpRoute> route, jni::ref<java::lang::Object> state) { return call_method<"requestConnection", jni::ref<org::apache::http::conn::ClientConnectionRequest>>(route, state); }
	void releaseConnection(jni::ref<org::apache::http::conn::ManagedClientConnection> conn, jlong validDuration, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"releaseConnection", void>(conn, validDuration, p3); }
	void shutdown() { return call_method<"shutdown", void>(); }
	jint getConnectionsInPool(jni::ref<org::apache::http::conn::routing::HttpRoute> route) { return call_method<"getConnectionsInPool", jint>(route); }
	jint getConnectionsInPool() { return call_method<"getConnectionsInPool", jint>(); }
	void closeIdleConnections(jlong idleTimeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"closeIdleConnections", void>(idleTimeout, p2); }
	void closeExpiredConnections() { return call_method<"closeExpiredConnections", void>(); }

protected:

	ThreadSafeClientConnManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER
