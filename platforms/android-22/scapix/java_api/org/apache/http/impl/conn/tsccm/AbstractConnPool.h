// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/impl/conn/tsccm/RefQueueHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::conn::tsccm { class AbstractConnPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::conn::tsccm::AbstractConnPool>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/conn/tsccm/AbstractConnPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::impl::conn::tsccm::RefQueueHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ref/Reference.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/org/apache/http/conn/routing/HttpRoute.h>
#include <scapix/java_api/org/apache/http/impl/conn/tsccm/BasicPoolEntry.h>
#include <scapix/java_api/org/apache/http/impl/conn/tsccm/PoolEntryRequest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::conn::tsccm::AbstractConnPool : public jni::object_base<"org/apache/http/impl/conn/tsccm/AbstractConnPool",
	java::lang::Object,
	org::apache::http::impl::conn::tsccm::RefQueueHandler>
{
public:

	void enableConnectionGC() { return call_method<"enableConnectionGC", void>(); }
	jni::ref<org::apache::http::impl::conn::tsccm::BasicPoolEntry> getEntry(jni::ref<org::apache::http::conn::routing::HttpRoute> route, jni::ref<java::lang::Object> state, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p4) { return call_method<"getEntry", jni::ref<org::apache::http::impl::conn::tsccm::BasicPoolEntry>>(route, state, timeout, p4); }
	jni::ref<org::apache::http::impl::conn::tsccm::PoolEntryRequest> requestPoolEntry(jni::ref<org::apache::http::conn::routing::HttpRoute> p1, jni::ref<java::lang::Object> p2) { return call_method<"requestPoolEntry", jni::ref<org::apache::http::impl::conn::tsccm::PoolEntryRequest>>(p1, p2); }
	void freeEntry(jni::ref<org::apache::http::impl::conn::tsccm::BasicPoolEntry> p1, jboolean p2, jlong p3, jni::ref<java::util::concurrent::TimeUnit> p4) { return call_method<"freeEntry", void>(p1, p2, p3, p4); }
	void handleReference(jni::ref<java::lang::ref::Reference> ref) { return call_method<"handleReference", void>(ref); }
	void closeIdleConnections(jlong idletime, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"closeIdleConnections", void>(idletime, p2); }
	void closeExpiredConnections() { return call_method<"closeExpiredConnections", void>(); }
	void deleteClosedConnections() { return call_method<"deleteClosedConnections", void>(); }
	void shutdown() { return call_method<"shutdown", void>(); }

protected:

	AbstractConnPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL
