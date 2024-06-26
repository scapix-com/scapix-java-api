// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/rmi/log/LogHandler.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTLOGHANDLER_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTLOGHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class Activation_ActLogHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::Activation_ActLogHandler>
{
	static constexpr fixed_string class_name = "sun/rmi/server/Activation$ActLogHandler";
	using base_classes = std::tuple<scapix::java_api::sun::rmi::log::LogHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTLOGHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTLOGHANDLER)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTLOGHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::Activation_ActLogHandler : public jni::object_base<"sun/rmi/server/Activation$ActLogHandler",
	sun::rmi::log::LogHandler>
{
public:

	jni::ref<java::lang::Object> initialSnapshot() { return call_method<"initialSnapshot", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> applyUpdate(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"applyUpdate", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	Activation_ActLogHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_ACTLOGHANDLER
