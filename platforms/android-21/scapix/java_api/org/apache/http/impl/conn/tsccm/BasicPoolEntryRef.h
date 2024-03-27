// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::conn::tsccm { class BasicPoolEntryRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/conn/tsccm/BasicPoolEntryRef";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ref/ReferenceQueue.h>
#include <scapix/java_api/org/apache/http/conn/routing/HttpRoute.h>
#include <scapix/java_api/org/apache/http/impl/conn/tsccm/BasicPoolEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::conn::tsccm::BasicPoolEntryRef : public jni::object_base<"org/apache/http/impl/conn/tsccm/BasicPoolEntryRef",
	java::lang::ref::WeakReference>
{
public:

	static jni::ref<org::apache::http::impl::conn::tsccm::BasicPoolEntryRef> new_object(jni::ref<org::apache::http::impl::conn::tsccm::BasicPoolEntry> entry, jni::ref<java::lang::ref::ReferenceQueue> queue) { return base_::new_object(entry, queue); }
	jni::ref<org::apache::http::conn::routing::HttpRoute> getRoute() { return call_method<"getRoute", jni::ref<org::apache::http::conn::routing::HttpRoute>>(); }

protected:

	BasicPoolEntryRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF
