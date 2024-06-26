// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_DELEGATEDTASK_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_DELEGATEDTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLEngineImpl_DelegatedTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLEngineImpl_DelegatedTask>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLEngineImpl$DelegatedTask";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_DELEGATEDTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_DELEGATEDTASK)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_DELEGATEDTASK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLEngineImpl_DelegatedTask : public jni::object_base<"sun/security/ssl/SSLEngineImpl$DelegatedTask",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	SSLEngineImpl_DelegatedTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_DELEGATEDTASK
