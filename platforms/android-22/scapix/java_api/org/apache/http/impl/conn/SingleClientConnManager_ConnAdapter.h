// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/impl/conn/AbstractPooledConnAdapter.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_CONNADAPTER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_CONNADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::conn { class SingleClientConnManager_ConnAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/conn/SingleClientConnManager$ConnAdapter";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::impl::conn::AbstractPooledConnAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_CONNADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_CONNADAPTER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_CONNADAPTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter : public jni::object_base<"org/apache/http/impl/conn/SingleClientConnManager$ConnAdapter",
	org::apache::http::impl::conn::AbstractPooledConnAdapter>
{
public:


protected:

	SingleClientConnManager_ConnAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_SINGLECLIENTCONNMANAGER_CONNADAPTER