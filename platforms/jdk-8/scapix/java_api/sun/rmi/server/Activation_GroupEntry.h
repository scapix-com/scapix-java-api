// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_GROUPENTRY_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_GROUPENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class Activation_GroupEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::Activation_GroupEntry>
{
	static constexpr fixed_string class_name = "sun/rmi/server/Activation$GroupEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_GROUPENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_GROUPENTRY)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_GROUPENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::Activation_GroupEntry : public jni::object_base<"sun/rmi/server/Activation$GroupEntry",
	java::lang::Object,
	java::io::Serializable>
{
public:


protected:

	Activation_GroupEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_GROUPENTRY
