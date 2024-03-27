// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/commons/Remapper.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_SIMPLEREMAPPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_SIMPLEREMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::commons { class SimpleRemapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::SimpleRemapper>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/commons/SimpleRemapper";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::Remapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_SIMPLEREMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_SIMPLEREMAPPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_SIMPLEREMAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::commons::SimpleRemapper : public jni::object_base<"jdk/internal/org/objectweb/asm/commons/SimpleRemapper",
	jdk::internal::org::objectweb::asm_::commons::Remapper>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::commons::SimpleRemapper> new_object(jni::ref<java::util::Map> mapping) { return base_::new_object(mapping); }
	static jni::ref<jdk::internal::org::objectweb::asm_::commons::SimpleRemapper> new_object(jni::ref<java::lang::String> oldName, jni::ref<java::lang::String> newName) { return base_::new_object(oldName, newName); }
	jni::ref<java::lang::String> mapMethodName(jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"mapMethodName", jni::ref<java::lang::String>>(owner, name, descriptor); }
	jni::ref<java::lang::String> mapInvokeDynamicMethodName(jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"mapInvokeDynamicMethodName", jni::ref<java::lang::String>>(name, descriptor); }
	jni::ref<java::lang::String> mapFieldName(jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"mapFieldName", jni::ref<java::lang::String>>(owner, name, descriptor); }
	jni::ref<java::lang::String> map(jni::ref<java::lang::String> key) { return call_method<"map", jni::ref<java::lang::String>>(key); }

protected:

	SimpleRemapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_SIMPLEREMAPPER
