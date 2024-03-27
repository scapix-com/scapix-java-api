// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::modelmbean { class ModelMBeanInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::modelmbean::ModelMBeanInfo>
{
	static constexpr fixed_string class_name = "javax/management/modelmbean/ModelMBeanInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFO)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/Descriptor.h>
#include <scapix/java_api/javax/management/MBeanAttributeInfo.h>
#include <scapix/java_api/javax/management/MBeanConstructorInfo.h>
#include <scapix/java_api/javax/management/MBeanNotificationInfo.h>
#include <scapix/java_api/javax/management/MBeanOperationInfo.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanAttributeInfo.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanNotificationInfo.h>
#include <scapix/java_api/javax/management/modelmbean/ModelMBeanOperationInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::modelmbean::ModelMBeanInfo : public jni::object_base<"javax/management/modelmbean/ModelMBeanInfo",
	java::lang::Object>
{
public:

	jni::ref<jni::array<javax::management::Descriptor>> getDescriptors(jni::ref<java::lang::String> p1) { return call_method<"getDescriptors", jni::ref<jni::array<javax::management::Descriptor>>>(p1); }
	void setDescriptors(jni::ref<jni::array<javax::management::Descriptor>> p1) { return call_method<"setDescriptors", void>(p1); }
	jni::ref<javax::management::Descriptor> getDescriptor(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getDescriptor", jni::ref<javax::management::Descriptor>>(p1, p2); }
	void setDescriptor(jni::ref<javax::management::Descriptor> p1, jni::ref<java::lang::String> p2) { return call_method<"setDescriptor", void>(p1, p2); }
	jni::ref<javax::management::Descriptor> getMBeanDescriptor() { return call_method<"getMBeanDescriptor", jni::ref<javax::management::Descriptor>>(); }
	void setMBeanDescriptor(jni::ref<javax::management::Descriptor> p1) { return call_method<"setMBeanDescriptor", void>(p1); }
	jni::ref<javax::management::modelmbean::ModelMBeanAttributeInfo> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<javax::management::modelmbean::ModelMBeanAttributeInfo>>(p1); }
	jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo> getOperation(jni::ref<java::lang::String> p1) { return call_method<"getOperation", jni::ref<javax::management::modelmbean::ModelMBeanOperationInfo>>(p1); }
	jni::ref<javax::management::modelmbean::ModelMBeanNotificationInfo> getNotification(jni::ref<java::lang::String> p1) { return call_method<"getNotification", jni::ref<javax::management::modelmbean::ModelMBeanNotificationInfo>>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<jni::array<javax::management::MBeanAttributeInfo>> getAttributes() { return call_method<"getAttributes", jni::ref<jni::array<javax::management::MBeanAttributeInfo>>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<javax::management::MBeanConstructorInfo>> getConstructors() { return call_method<"getConstructors", jni::ref<jni::array<javax::management::MBeanConstructorInfo>>>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<javax::management::MBeanNotificationInfo>> getNotifications() { return call_method<"getNotifications", jni::ref<jni::array<javax::management::MBeanNotificationInfo>>>(); }
	jni::ref<jni::array<javax::management::MBeanOperationInfo>> getOperations() { return call_method<"getOperations", jni::ref<jni::array<javax::management::MBeanOperationInfo>>>(); }

protected:

	ModelMBeanInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MODELMBEAN_MODELMBEANINFO
