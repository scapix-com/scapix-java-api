// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_RESOURCEMANAGER_APPLETPARAMETER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_RESOURCEMANAGER_APPLETPARAMETER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::naming::internal { class ResourceManager_AppletParameter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::naming::internal::ResourceManager_AppletParameter>
{
	static constexpr fixed_string class_name = "com/sun/naming/internal/ResourceManager$AppletParameter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_RESOURCEMANAGER_APPLETPARAMETER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_RESOURCEMANAGER_APPLETPARAMETER)
#define SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_RESOURCEMANAGER_APPLETPARAMETER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::naming::internal::ResourceManager_AppletParameter : public jni::object_base<"com/sun/naming/internal/ResourceManager$AppletParameter",
	java::lang::Object>
{
public:


protected:

	ResourceManager_AppletParameter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_RESOURCEMANAGER_APPLETPARAMETER
