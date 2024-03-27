// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SEEDGENERATOR_THREADEDSEEDGENERATOR_BOGUSTHREAD_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SEEDGENERATOR_THREADEDSEEDGENERATOR_BOGUSTHREAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class SeedGenerator_ThreadedSeedGenerator_BogusThread; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::SeedGenerator_ThreadedSeedGenerator_BogusThread>
{
	static constexpr fixed_string class_name = "sun/security/provider/SeedGenerator$ThreadedSeedGenerator$BogusThread";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SEEDGENERATOR_THREADEDSEEDGENERATOR_BOGUSTHREAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SEEDGENERATOR_THREADEDSEEDGENERATOR_BOGUSTHREAD)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SEEDGENERATOR_THREADEDSEEDGENERATOR_BOGUSTHREAD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::SeedGenerator_ThreadedSeedGenerator_BogusThread : public jni::object_base<"sun/security/provider/SeedGenerator$ThreadedSeedGenerator$BogusThread",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	SeedGenerator_ThreadedSeedGenerator_BogusThread(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SEEDGENERATOR_THREADEDSEEDGENERATOR_BOGUSTHREAD