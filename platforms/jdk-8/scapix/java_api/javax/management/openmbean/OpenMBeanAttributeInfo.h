// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/openmbean/OpenMBeanParameterInfo.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANATTRIBUTEINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANATTRIBUTEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::openmbean { class OpenMBeanAttributeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::openmbean::OpenMBeanAttributeInfo>
{
	static constexpr fixed_string class_name = "javax/management/openmbean/OpenMBeanAttributeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::openmbean::OpenMBeanParameterInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANATTRIBUTEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANATTRIBUTEINFO)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANATTRIBUTEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::openmbean::OpenMBeanAttributeInfo : public jni::object_base<"javax/management/openmbean/OpenMBeanAttributeInfo",
	java::lang::Object,
	javax::management::openmbean::OpenMBeanParameterInfo>
{
public:

	jboolean isReadable() { return call_method<"isReadable", jboolean>(); }
	jboolean isWritable() { return call_method<"isWritable", jboolean>(); }
	jboolean isIs() { return call_method<"isIs", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OpenMBeanAttributeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANATTRIBUTEINFO
