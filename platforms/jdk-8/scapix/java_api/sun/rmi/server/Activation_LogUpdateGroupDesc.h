// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/rmi/server/Activation_LogRecord.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_LOGUPDATEGROUPDESC_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_LOGUPDATEGROUPDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class Activation_LogUpdateGroupDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::Activation_LogUpdateGroupDesc>
{
	static constexpr fixed_string class_name = "sun/rmi/server/Activation$LogUpdateGroupDesc";
	using base_classes = std::tuple<scapix::java_api::sun::rmi::server::Activation_LogRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_LOGUPDATEGROUPDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_LOGUPDATEGROUPDESC)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_LOGUPDATEGROUPDESC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::Activation_LogUpdateGroupDesc : public jni::object_base<"sun/rmi/server/Activation$LogUpdateGroupDesc",
	sun::rmi::server::Activation_LogRecord>
{
public:


protected:

	Activation_LogUpdateGroupDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_LOGUPDATEGROUPDESC
