// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/javax/management/DescriptorRead.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANFEATUREINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANFEATUREINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class MBeanFeatureInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::MBeanFeatureInfo>
{
	static constexpr fixed_string class_name = "javax/management/MBeanFeatureInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::javax::management::DescriptorRead>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANFEATUREINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANFEATUREINFO)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANFEATUREINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/Descriptor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::MBeanFeatureInfo : public jni::object_base<"javax/management/MBeanFeatureInfo",
	java::lang::Object,
	java::io::Serializable,
	javax::management::DescriptorRead>
{
public:

	static jni::ref<javax::management::MBeanFeatureInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::management::MBeanFeatureInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<javax::management::Descriptor> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<javax::management::Descriptor> getDescriptor() { return call_method<"getDescriptor", jni::ref<javax::management::Descriptor>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	MBeanFeatureInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANFEATUREINFO
