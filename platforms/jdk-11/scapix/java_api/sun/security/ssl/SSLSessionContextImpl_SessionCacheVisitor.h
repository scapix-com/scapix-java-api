// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/Cache_CacheVisitor.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSESSIONCONTEXTIMPL_SESSIONCACHEVISITOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSESSIONCONTEXTIMPL_SESSIONCACHEVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLSessionContextImpl_SessionCacheVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLSessionContextImpl_SessionCacheVisitor>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLSessionContextImpl$SessionCacheVisitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::Cache_CacheVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSESSIONCONTEXTIMPL_SESSIONCACHEVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSESSIONCONTEXTIMPL_SESSIONCACHEVISITOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSESSIONCONTEXTIMPL_SESSIONCACHEVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLSessionContextImpl_SessionCacheVisitor : public jni::object_base<"sun/security/ssl/SSLSessionContextImpl$SessionCacheVisitor",
	java::lang::Object,
	sun::security::util::Cache_CacheVisitor>
{
public:

	void visit(jni::ref<java::util::Map> map) { return call_method<"visit", void>(map); }

protected:

	SSLSessionContextImpl_SessionCacheVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSESSIONCONTEXTIMPL_SESSIONCACHEVISITOR
