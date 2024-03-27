// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/Attribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_MODULETARGETATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_MODULETARGETATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::commons { class ModuleTargetAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::ModuleTargetAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/commons/ModuleTargetAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_MODULETARGETATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_MODULETARGETATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_MODULETARGETATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::commons::ModuleTargetAttribute : public jni::object_base<"jdk/internal/org/objectweb/asm/commons/ModuleTargetAttribute",
	jdk::internal::org::objectweb::asm_::Attribute>
{
public:

	jni::ref<java::lang::String> platform() { return get_field<"platform", jni::ref<java::lang::String>>(); }
	void platform(jni::ref<java::lang::String> v) { set_field<"platform", jni::ref<java::lang::String>>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::commons::ModuleTargetAttribute> new_object(jni::ref<java::lang::String> platform) { return base_::new_object(platform); }
	static jni::ref<jdk::internal::org::objectweb::asm_::commons::ModuleTargetAttribute> new_object() { return base_::new_object(); }

protected:

	ModuleTargetAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_MODULETARGETATTRIBUTE
