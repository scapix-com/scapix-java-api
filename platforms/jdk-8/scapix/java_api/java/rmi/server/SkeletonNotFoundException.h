// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/RemoteException.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_SERVER_SKELETONNOTFOUNDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_SKELETONNOTFOUNDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::server { class SkeletonNotFoundException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::server::SkeletonNotFoundException>
{
	static constexpr fixed_string class_name = "java/rmi/server/SkeletonNotFoundException";
	using base_classes = std::tuple<scapix::java_api::java::rmi::RemoteException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_SKELETONNOTFOUNDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_SERVER_SKELETONNOTFOUNDEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_SKELETONNOTFOUNDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::server::SkeletonNotFoundException : public jni::object_base<"java/rmi/server/SkeletonNotFoundException",
	java::rmi::RemoteException>
{
public:

	static jni::ref<java::rmi::server::SkeletonNotFoundException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::rmi::server::SkeletonNotFoundException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Exception> p2) { return base_::new_object(p1, p2); }

protected:

	SkeletonNotFoundException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_SKELETONNOTFOUNDEXCEPTION
