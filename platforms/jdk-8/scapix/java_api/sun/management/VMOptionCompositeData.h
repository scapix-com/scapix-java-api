// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/LazyCompositeData.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_VMOPTIONCOMPOSITEDATA_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_VMOPTIONCOMPOSITEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class VMOptionCompositeData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::VMOptionCompositeData>
{
	static constexpr fixed_string class_name = "sun/management/VMOptionCompositeData";
	using base_classes = std::tuple<scapix::java_api::sun::management::LazyCompositeData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_VMOPTIONCOMPOSITEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_VMOPTIONCOMPOSITEDATA)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_VMOPTIONCOMPOSITEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/management/VMOption.h>
#include <scapix/java_api/com/sun/management/VMOption_Origin.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::VMOptionCompositeData : public jni::object_base<"sun/management/VMOptionCompositeData",
	sun::management::LazyCompositeData>
{
public:

	jni::ref<com::sun::management::VMOption> getVMOption() { return call_method<"getVMOption", jni::ref<com::sun::management::VMOption>>(); }
	static jni::ref<javax::management::openmbean::CompositeData> toCompositeData(jni::ref<com::sun::management::VMOption> p1) { return call_static_method<"toCompositeData", jni::ref<javax::management::openmbean::CompositeData>>(p1); }
	static jni::ref<java::lang::String> getName(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getValue(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getValue", jni::ref<java::lang::String>>(p1); }
	static jni::ref<com::sun::management::VMOption_Origin> getOrigin(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getOrigin", jni::ref<com::sun::management::VMOption_Origin>>(p1); }
	static jboolean isWriteable(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"isWriteable", jboolean>(p1); }
	static void validateCompositeData(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"validateCompositeData", void>(p1); }

protected:

	VMOptionCompositeData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_VMOPTIONCOMPOSITEDATA
