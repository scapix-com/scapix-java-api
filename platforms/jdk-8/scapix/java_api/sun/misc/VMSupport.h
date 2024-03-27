// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_VMSUPPORT_FWD
#define SCAPIX_JAVA_API_SUN_MISC_VMSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class VMSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::VMSupport>
{
	static constexpr fixed_string class_name = "sun/misc/VMSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_VMSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_VMSUPPORT)
#define SCAPIX_JAVA_API_SUN_MISC_VMSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::VMSupport : public jni::object_base<"sun/misc/VMSupport",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::VMSupport> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Properties> getAgentProperties() { return call_static_method<"getAgentProperties", jni::ref<java::util::Properties>>(); }
	static jni::ref<jni::array<jbyte>> serializePropertiesToByteArray() { return call_static_method<"serializePropertiesToByteArray", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> serializeAgentPropertiesToByteArray() { return call_static_method<"serializeAgentPropertiesToByteArray", jni::ref<jni::array<jbyte>>>(); }
	static jboolean isClassPathAttributePresent(jni::ref<java::lang::String> p1) { return call_static_method<"isClassPathAttributePresent", jboolean>(p1); }
	static jni::ref<java::lang::String> getVMTemporaryDirectory() { return call_static_method<"getVMTemporaryDirectory", jni::ref<java::lang::String>>(); }

protected:

	VMSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_VMSUPPORT