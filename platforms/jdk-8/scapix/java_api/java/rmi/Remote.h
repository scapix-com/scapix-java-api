// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_REMOTE_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_REMOTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi { class Remote; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::Remote>
{
	static constexpr fixed_string class_name = "java/rmi/Remote";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_REMOTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_REMOTE)
#define SCAPIX_JAVA_API_JAVA_RMI_REMOTE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::Remote : public jni::object_base<"java/rmi/Remote",
	java::lang::Object>
{
public:


protected:

	Remote(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_REMOTE
