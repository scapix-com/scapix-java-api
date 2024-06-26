// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/MBeanInfo.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanInfo.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFOSUPPORT_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFOSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::modelmbean { class ModelMBeanInfoSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::modelmbean::ModelMBeanInfoSupport>
{
	static constexpr fixed_string class_name = "javax/management/modelmbean/ModelMBeanInfoSupport";
	using base_classes = std::tuple<scapix::java_api::javax::management::MBeanInfo, scapix::java_api::javax::management::modelmbean::ModelMBeanInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFOSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFOSUPPORT)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFOSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/Descriptor.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanAttributeInfo.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanConstructorInfo.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanNotificationInfo.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanOperationInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::modelmbean::ModelMBeanInfoSupport : public jni::object_base<"javax/management/modelmbean/ModelMBeanInfoSupport",
	javax::management::MBeanInfo,
	javax::management::modelmbean::ModelMBeanInfo>
{
public:

	static jni::ref<javax::management::modelmbean::ModelMBeanInfoSupport> new_object(jni::ref<javax::management::modelmbean::ModelMBeanInfo> p1) { return base_::new_object(p1); }
	static jni::ref<javax::management::modelmbean::ModelMBeanInfoSupport> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanAttributeInfo>> p3, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanConstructorInfo>> p4, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanOperationInfo>> p5, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanNotificationInfo>> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<javax::management::modelmbean::ModelMBeanInfoSupport> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanAttributeInfo>> p3, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanConstructorInfo>> p4, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanOperationInfo>> p5, jni::ref<jni::array<javax::management::modelmbean::ModelMBeanNotificationInfo>> p6, jni::ref<javax::management::Descriptor> p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<jni::array<javax::management::Descriptor>> getDescriptors(jni::ref<java::lang::String> p1) { return call_method<"getDescriptors", jni::ref<jni::array<javax::management::Descriptor>>>(p1); }
	void setDescriptors(jni::ref<jni::array<javax::management::Descriptor>> p1) { return call_method<"setDescriptors", void>(p1); }
	jni::ref<javax::management::Descriptor> getDescriptor(jni::ref<java::lang::String> p1) { return call_method<"getDescriptor", jni::ref<javax::management::Descriptor>>(p1); }
	jni::ref<javax::management::Descriptor> getDescriptor(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getDescriptor", jni::ref<javax::management::Descriptor>>(p1, p2); }
	void setDescriptor(jni::ref<javax::management::Descriptor> p1, jni::ref<java::lang::String> p2) { return call_method<"setDescriptor", void>(p1, p2); }
	jni::ref<javax::management::modelmbean::ModelMBeanAttributeInfo> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<javax::management::modelmbean::ModelMBeanAttributeInfo>>(p1); }
	jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> getOperation(jni::ref<java::lang::String> p1) { return call_method<"getOperation", jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo>>(p1); }
	jni::ref<javax::management::modelmbean::ModelMBeanConstructorInfo> getConstructor(jni::ref<java::lang::String> p1) { return call_method<"getConstructor", jni::ref<javax::management::modelmbean::ModelMBeanConstructorInfo>>(p1); }
	jni::ref<javax::management::modelmbean::ModelMBeanNotificationInfo> getNotification(jni::ref<java::lang::String> p1) { return call_method<"getNotification", jni::ref<javax::management::modelmbean::ModelMBeanNotificationInfo>>(p1); }
	jni::ref<javax::management::Descriptor> getDescriptor() { return call_method<"getDescriptor", jni::ref<javax::management::Descriptor>>(); }
	jni::ref<javax::management::Descriptor> getMBeanDescriptor() { return call_method<"getMBeanDescriptor", jni::ref<javax::management::Descriptor>>(); }
	void setMBeanDescriptor(jni::ref<javax::management::Descriptor> p1) { return call_method<"setMBeanDescriptor", void>(p1); }

protected:

	ModelMBeanInfoSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFOSUPPORT
