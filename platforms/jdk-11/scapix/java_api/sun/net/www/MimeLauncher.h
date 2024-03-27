// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_MIMELAUNCHER_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_MIMELAUNCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www { class MimeLauncher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::MimeLauncher>
{
	static constexpr fixed_string class_name = "sun/net/www/MimeLauncher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_MIMELAUNCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_MIMELAUNCHER)
#define SCAPIX_JAVA_API_SUN_NET_WWW_MIMELAUNCHER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::MimeLauncher : public jni::object_base<"sun/net/www/MimeLauncher",
	java::lang::Thread>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	MimeLauncher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_MIMELAUNCHER