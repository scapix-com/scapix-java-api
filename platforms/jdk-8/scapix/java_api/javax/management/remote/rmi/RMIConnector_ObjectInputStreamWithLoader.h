// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_OBJECTINPUTSTREAMWITHLOADER_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_OBJECTINPUTSTREAMWITHLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIConnector_ObjectInputStreamWithLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIConnector_ObjectInputStreamWithLoader>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIConnector$ObjectInputStreamWithLoader";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_OBJECTINPUTSTREAMWITHLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_OBJECTINPUTSTREAMWITHLOADER)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_OBJECTINPUTSTREAMWITHLOADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::remote::rmi::RMIConnector_ObjectInputStreamWithLoader : public jni::object_base<"javax/management/remote/rmi/RMIConnector$ObjectInputStreamWithLoader",
	java::io::ObjectInputStream>
{
public:


protected:

	RMIConnector_ObjectInputStreamWithLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_OBJECTINPUTSTREAMWITHLOADER
