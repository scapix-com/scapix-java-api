// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/MBeanOperationInfo.h>
#include <scapix/java_api/javax/management/openmbean/OpenMBeanOperationInfo.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANOPERATIONINFOSUPPORT_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANOPERATIONINFOSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::openmbean { class OpenMBeanOperationInfoSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::openmbean::OpenMBeanOperationInfoSupport>
{
	static constexpr fixed_string class_name = "javax/management/openmbean/OpenMBeanOperationInfoSupport";
	using base_classes = std::tuple<scapix::java_api::javax::management::MBeanOperationInfo, scapix::java_api::javax::management::openmbean::OpenMBeanOperationInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANOPERATIONINFOSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANOPERATIONINFOSUPPORT)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANOPERATIONINFOSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/Descriptor.h>
#include <scapix/java_api/javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <scapix/java_api/javax/management/openmbean/OpenType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::openmbean::OpenMBeanOperationInfoSupport : public jni::object_base<"javax/management/openmbean/OpenMBeanOperationInfoSupport",
	javax::management::MBeanOperationInfo,
	javax::management::openmbean::OpenMBeanOperationInfo>
{
public:

	static jni::ref<javax::management::openmbean::OpenMBeanOperationInfoSupport> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<javax::management::openmbean::OpenMBeanParameterInfo>> p3, jni::ref<javax::management::openmbean::OpenType> p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<javax::management::openmbean::OpenMBeanOperationInfoSupport> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<javax::management::openmbean::OpenMBeanParameterInfo>> p3, jni::ref<javax::management::openmbean::OpenType> p4, jint p5, jni::ref<javax::management::Descriptor> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jni::ref<javax::management::openmbean::OpenType> getReturnOpenType() { return call_method<"getReturnOpenType", jni::ref<javax::management::openmbean::OpenType>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OpenMBeanOperationInfoSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_OPENMBEANOPERATIONINFOSUPPORT