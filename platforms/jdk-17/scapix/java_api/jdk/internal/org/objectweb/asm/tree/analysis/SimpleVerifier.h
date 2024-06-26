// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/analysis/BasicVerifier.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SIMPLEVERIFIER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SIMPLEVERIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree::analysis { class SimpleVerifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::analysis::SimpleVerifier>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/analysis/SimpleVerifier";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::analysis::BasicVerifier>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SIMPLEVERIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SIMPLEVERIFIER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SIMPLEVERIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Type.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/analysis/BasicValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::analysis::SimpleVerifier : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/analysis/SimpleVerifier",
	jdk::internal::org::objectweb::asm_::tree::analysis::BasicVerifier>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::SimpleVerifier> new_object() { return base_::new_object(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::SimpleVerifier> new_object(jni::ref<jdk::internal::org::objectweb::asm_::Type> currentClass, jni::ref<jdk::internal::org::objectweb::asm_::Type> currentSuperClass, jboolean isInterface) { return base_::new_object(currentClass, currentSuperClass, isInterface); }
	static jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::SimpleVerifier> new_object(jni::ref<jdk::internal::org::objectweb::asm_::Type> currentClass, jni::ref<jdk::internal::org::objectweb::asm_::Type> currentSuperClass, jni::ref<java::util::List> currentClassInterfaces, jboolean isInterface) { return base_::new_object(currentClass, currentSuperClass, currentClassInterfaces, isInterface); }
	void setClassLoader(jni::ref<java::lang::ClassLoader> loader) { return call_method<"setClassLoader", void>(loader); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::BasicValue> newValue(jni::ref<jdk::internal::org::objectweb::asm_::Type> type) { return call_method<"newValue", jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::BasicValue>>(type); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::BasicValue> merge(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::BasicValue> value1, jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::BasicValue> value2) { return call_method<"merge", jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::BasicValue>>(value1, value2); }

protected:

	SimpleVerifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SIMPLEVERIFIER
