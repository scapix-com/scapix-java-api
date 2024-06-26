// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_SERVER_UNREFERENCED_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_UNREFERENCED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::server { class Unreferenced; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::server::Unreferenced>
{
	static constexpr fixed_string class_name = "java/rmi/server/Unreferenced";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_UNREFERENCED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_SERVER_UNREFERENCED)
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_UNREFERENCED

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::server::Unreferenced : public jni::object_base<"java/rmi/server/Unreferenced",
	java::lang::Object>
{
public:

	void unreferenced() { return call_method<"unreferenced", void>(); }

protected:

	Unreferenced(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_UNREFERENCED
