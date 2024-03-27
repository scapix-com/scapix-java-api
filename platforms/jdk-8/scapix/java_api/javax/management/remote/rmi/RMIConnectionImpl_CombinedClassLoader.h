// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ClassLoader.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_COMBINEDCLASSLOADER_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_COMBINEDCLASSLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIConnectionImpl_CombinedClassLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIConnectionImpl_CombinedClassLoader>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader";
	using base_classes = std::tuple<scapix::java_api::java::lang::ClassLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_COMBINEDCLASSLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_COMBINEDCLASSLOADER)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_COMBINEDCLASSLOADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::remote::rmi::RMIConnectionImpl_CombinedClassLoader : public jni::object_base<"javax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader",
	java::lang::ClassLoader>
{
public:


protected:

	RMIConnectionImpl_CombinedClassLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_COMBINEDCLASSLOADER
