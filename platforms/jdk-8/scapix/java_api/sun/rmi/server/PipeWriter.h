// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_PIPEWRITER_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_PIPEWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class PipeWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::PipeWriter>
{
	static constexpr fixed_string class_name = "sun/rmi/server/PipeWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_PIPEWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_PIPEWRITER)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_PIPEWRITER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::PipeWriter : public jni::object_base<"sun/rmi/server/PipeWriter",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	PipeWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_PIPEWRITER
