// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/rmi/runtime/Log_LogFactory.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOGFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOGFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::runtime { class Log_LoggerLogFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::runtime::Log_LoggerLogFactory>
{
	static constexpr fixed_string class_name = "sun/rmi/runtime/Log$LoggerLogFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::rmi::runtime::Log_LogFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOGFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOGFACTORY)
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOGFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/logging/Level.h>
#include <scapix/java_api/sun/rmi/runtime/Log.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::runtime::Log_LoggerLogFactory : public jni::object_base<"sun/rmi/runtime/Log$LoggerLogFactory",
	java::lang::Object,
	sun::rmi::runtime::Log_LogFactory>
{
public:

	jni::ref<sun::rmi::runtime::Log> createLog(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::util::logging::Level> p3) { return call_method<"createLog", jni::ref<sun::rmi::runtime::Log>>(p1, p2, p3); }

protected:

	Log_LoggerLogFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOGFACTORY
