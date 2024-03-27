// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/MBeanOperationInfo.h>
#include <scapix/java_api/javax/management/DescriptorAccess.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANOPERATIONINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANOPERATIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::modelmbean { class ModelMBeanOperationInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::modelmbean::ModelMBeanOperationInfo>
{
	static constexpr fixed_string class_name = "javax/management/modelmbean/ModelMBeanOperationInfo";
	using base_classes = std::tuple<scapix::java_api::javax::management::MBeanOperationInfo, scapix::java_api::javax::management::DescriptorAccess>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANOPERATIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANOPERATIONINFO)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANOPERATIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#include <scapix/java_api/javax/management/Descriptor.h>
#include <scapix/java_api/javax/management/MBeanParameterInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::modelmbean::ModelMBeanOperationInfo : public jni::object_base<"javax/management/modelmbean/ModelMBeanOperationInfo",
	javax::management::MBeanOperationInfo,
	javax::management::DescriptorAccess>
{
public:

	static jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::reflect::Method> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::reflect::Method> p2, jni::ref<javax::management::Descriptor> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<javax::management::MBeanParameterInfo>> p3, jni::ref<java::lang::String> p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<javax::management::MBeanParameterInfo>> p3, jni::ref<java::lang::String> p4, jint p5, jni::ref<javax::management::Descriptor> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> new_object(jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<javax::management::Descriptor> getDescriptor() { return call_method<"getDescriptor", jni::ref<javax::management::Descriptor>>(); }
	void setDescriptor(jni::ref<javax::management::Descriptor> p1) { return call_method<"setDescriptor", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ModelMBeanOperationInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANOPERATIONINFO
